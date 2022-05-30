from serial import Serial
import time
pin=4
tim=5

arduino = Serial(port='COM3', baudrate=120000, timeout=1)
def write_read(x):
    arduino.write(bytes(x, 'utf-8'))
    data = arduino.readline()
    return data

while(1):
    v=int(input())
    ressult=write_read(str(v))
    print(ressult)



