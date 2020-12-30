import serial
import time

# Setup serial interface
# ls /dev/tty* >> gives the first parameter
ser = serial.Serial("/dev/ttyUSB0", 9600)

while True:
	# Read the data coming from Serial-Stream in bytes
	read_ser = ser.readline()
	# .decode() Converts the bytes to string!
	print(read_ser.decode())
	# Delay for a second before reading again
	time.sleep(1)
