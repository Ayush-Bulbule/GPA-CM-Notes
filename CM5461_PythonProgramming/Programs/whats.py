import pyautogui
import time

time.sleep(4)
for i in range(0, 1000):
    pyautogui.typewrite("Hey! sisi 😁")
    pyautogui.press('enter')
    time.sleep(2)
