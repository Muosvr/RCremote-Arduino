import serial
import time

ser = serial.Serial('COM3', 9600, timeout=1)

while True:
    input = ser.readline()
    print(input)
    time.sleep(0.02)
