# Arduino Make file. Refer to https://github.com/sudar/Arduino-Makefile

ARDUINO_DIR=/home/jc/Downloads/arduino-1.8.7
ARDUINO_SKETCHBOOK=/home/jc/Downloads/arduino-1.8.7
ARDMK_DIR=/home/jc/Arduino-Makefile
AVR_TOOLS_DIR=/usr
AVRDUDE_CONF=/etc/avrdude.conf


# if you have placed the alternate core in your sketchbook directory, then you can just mention the core name alone.
#ALTERNATE_CORE = attiny
# If not, you might have to include the full path.
#ALTERNATE_CORE_PATH = /home/sudar/Dropbox/code/arduino-sketches/hardware/attiny/

# !!! Important. You have to use "make ispload" to upload when using ISP programmer
ISP_PROG = usbtiny

# 1.5+ example of submenu cpu
BOARD_TAG    = pro
#BOARD_SUB    = pro

# clock is a submenu too
#F_CPU        = 16000000L
F_CPU        = 16000000L

MCU = atmega328p

ARDUINO_LIBS = Wire Encoder LiquidCrystal_I2C
#ARDUINO_LIBS = Newliquidcrystal_1.3.5 TinyWireM

#include /usr/share/arduino/Arduino.mk
include /home/jc/AVR_mk_projects/Arduino.mk
