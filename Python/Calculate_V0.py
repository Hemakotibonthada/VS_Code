import tkinter as tk

def calculate_V0():
    R1 = float(entry_R1.get())
    V1 = float(entry_V1.get())
    R2 = float(entry_R2.get())
    
    #R1 = ((R2 * V1) / V0) - R2
    V0=V1*(R2/(R1+R2))
    result_label.config(text=f"The Resistor V0 Value is: {V0:.2f}")

# Create a tkinter window
window = tk.Tk()
window.title("Resistor Calculator")

# Create input fields and labels
label_R1 = tk.Label(window, text="The Resistor R1 (R1):")
entry_R1 = tk.Entry(window)

label_V1 = tk.Label(window, text="Input Voltage (V1):")
entry_V1 = tk.Entry(window)

label_R2 = tk.Label(window, text="R2 Value:")
entry_R2 = tk.Entry(window)

calculate_button = tk.Button(window, text="Calculate V0", command=calculate_V0)
result_label = tk.Label(window, text="")

# Place the widgets using grid layout
label_R1.grid(row=0, column=0)
entry_R1.grid(row=0, column=1)

label_V1.grid(row=1, column=0)
entry_V1.grid(row=1, column=1)

label_R2.grid(row=2, column=0)
entry_R2.grid(row=2, column=1)

calculate_button.grid(row=3, column=0, columnspan=2)
result_label.grid(row=4, column=0, columnspan=2)

window.mainloop()
