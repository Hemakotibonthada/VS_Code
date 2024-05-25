import pyautogui
import time
time.sleep(5)
for i in range(10):
    for j in range (10):
        for k in range(10):
            for l in range(10):
                pyautogui.write(f"{i}{j}{k}{l}")
                pyautogui.press("enter")