from serial import Serial
import time
pin=4
tim=5

arduino = Serial(port='COM3', baudrate=120000, timeout=1)
def write_read(x):
    arduino.write(bytes(x, 'utf-8'))
    data = arduino.readline()
    return data

while True:
    num=str(pin)
    value = write_read(num)
    tim=5
    while tim:
        mins, secs = divmod(tim, 60)
        timer = '{:02d}:{:02d}'.format(mins, secs)
        time.sleep(1)
        print(value)
        tim -= 1
    if(pin==4):
        pin=6
    elif(pin==6):
        pin=8
    elif(pin==8):
        pin=10
    else:
        pin=4



