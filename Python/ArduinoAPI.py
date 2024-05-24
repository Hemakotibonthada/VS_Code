import requests
import json
import tkinter as tk
from tkinter import ttk

# Credentials and IDs
client_id = "VxOyk2wQ9L0SVPijTZi2WEh6MA4FAbVo"
client_secret = "PznqJ4ZwlKQ5pBBkqPM00a1k!G3XXjElYP1RbGtZz4NKVwJgmXK@bK!2bZBDdxai"
thing_id = "b0d27dd9-ba32-457d-a06f-2694f7e251e4"
property_ids = {
    "switch1": "8bffde3d-a5fc-4ffd-afb3-071ce08f5a2f",
    "switch2": "7d013c72-0956-4f7c-bac4-369ae30ec3b5",
    "switch3": "d0e46747-7297-4d97-83aa-74a5757bbb7c",
    "switch4": "0f71a9dc-380a-4acb-b737-2792be9efdf9"
}

# Function to get access token
def get_access_token(client_id, client_secret):
    url = "https://api2.arduino.cc/iot/v1/clients/token"
    data = {
        'grant_type': 'client_credentials',
        'client_id': client_id,
        'client_secret': client_secret,
        'audience': 'https://api2.arduino.cc/iot'
    }
    response = requests.post(url, data=data)
    if response.status_code == 200:
        return response.json()['access_token']
    else:
        print(f"Error getting access token: {response.status_code} {response.text}")
        return None

# Function to update and publish the property
def update_and_publish_property(access_token, thing_id, property_id, new_state):
    headers = {
        "Accept" : "application/vnd.arduino.property+json,application/vnd.goa.error+json",
        'Authorization': f'Bearer {access_token}',
        'Content-Type': 'application/json'
    }

    # Update the property value
    update_url = f"https://api2.arduino.cc/iot/v2/things/{thing_id}/properties/{property_id}"
    update_payload = {'value': new_state}
    update_response = requests.put(update_url, json=update_payload, headers=headers)

    # Check update response
    if update_response.status_code == 200:
        try:
            update_result = update_response.json()
        except json.JSONDecodeError:
            update_result = f"Update successful, but no JSON returned: {update_response.status_code}"
    else:
        update_result = f"Update error: {update_response.status_code} {update_response.text}"

    # Publish the property value
    publish_url = f"https://api2.arduino.cc/iot/v2/things/{thing_id}/properties/{property_id}/publish"
    publish_response = requests.put(publish_url, json=update_payload, headers=headers)

    # Check publish response
    if publish_response.status_code == 200:
        try:
            publish_result = publish_response.json()
        except json.JSONDecodeError:
            publish_result = f"Publish successful, but no JSON returned: {publish_response.status_code}"
    else:
        publish_result = f"Publish error: {publish_response.status_code} {publish_response.text}"

    return update_result, publish_result

# Tkinter GUI setup
def toggle_state(switch_name):
    new_state = states[switch_name].get()
    access_token = get_access_token(client_id, client_secret)
    if access_token:
        property_id = property_ids[switch_name]
        update_result, publish_result = update_and_publish_property(access_token, thing_id, property_id, new_state)
        print(f"Update Result for {switch_name}: {update_result}")
        print(f"Publish Result for {switch_name}: {publish_result}")

# Create the main window
root = tk.Tk()
root.title("Arduino IoT Switches")

# Variables to hold the switch states
states = {
    "switch1": tk.BooleanVar(),
    "switch2": tk.BooleanVar(),
    "switch3": tk.BooleanVar(),
    "switch4": tk.BooleanVar()
}

# Store references to the checkbutton widgets
buttons = {}

# Digital switches (ToggleButtons)
for switch_name in states:
    state_var = states[switch_name]
    toggle_button = ttk.Checkbutton(root, text=f'{switch_name.capitalize()} Off', 
                                    command=lambda name=switch_name: toggle_state(name),
                                    variable=state_var, onvalue=True, offvalue=False)
    toggle_button.pack(pady=10)
    buttons[switch_name] = toggle_button

# Change button text based on state
def switch_text():
    for switch_name, state_var in states.items():
        button = buttons[switch_name]
        button.config(text=f'{switch_name.capitalize()} {"On" if state_var.get() else "Off"}')
    root.after(100, switch_text)

# Initialize switch text update loop
switch_text()

# Start the GUI event loop
root.mainloop()
