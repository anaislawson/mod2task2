# this code will read the touch values from the ESP32 and echo them on the command line
# you could do something else more interesting with these values (e.g. visualize/sonify)

# pip install pyserial 
import serial

# change the port as necessary by your OS
ser = serial.Serial('/dev/cu.usbserial-02301AF6', 115200)

while(True):
  string = str(ser.readline().strip(), 'ascii')
  
  print(str(ser.readline().strip(), 'ascii'))