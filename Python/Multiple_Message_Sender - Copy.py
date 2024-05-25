import pyautogui
import time
time.sleep(3)
for count in range(100):
    pyautogui.typewrite("Om Namahshivayaॐ-->"+str(count))
    pyautogui.press("enter")