# Arduino Make file. Refer to https://github.com/sudar/Arduino-Makefile

ARDUINO_DIR=/home/jc/Downloads/arduino-1.8.7
ARDUINO_SKETCHBOOK=/home/jc/Downloads/arduino-1.8.7
ARDMK_DIR=/home/jc/Arduino-Makefile
AVR_TOOLS_DIR=/usr
AVRDUDE_CONF=/etc/avrdude.conf


# if you have placed the alternate core in your sketchbook directory, then you can just mention the core name alone.
#ALTERNATE_CORE = attiny
ARDMK_VENDOR = ATTinyCore
#BOARD_TAG         = attiny85at8
CORE = tiny
#ALTERNATE_CORE = ATTinyCore
MCU=attiny85
# If not, you might have to include the full path.
#ALTERNATE_CORE_PATH = /home/sudar/Dropbox/code/arduino-sketches/hardware/attiny/
#ALTERNATE_CORE_PATH = /home/jc/Downloads/arduino-1.8.7/hardware/ATTinyCore/avr/
ARDUINO_VAR_PATH  = /home/jc/Downloads/arduino-1.8.7/hardware/ATTinyCore/avr/variants/tinyX5/

# !!! Important. You have to use "make ispload" to upload when using ISP programmer
ISP_PROG = usbtiny

# 1.5+ example of submenu cpu
BOARD_TAG    = attiny
BOARD_SUB    = attiny85

# clock is a submenu too
#F_CPU        = 16000000L
F_CPU        = 8000000L

#ARDUINO_LIBS = LiquidCrystal_ATtiny TinyWireM Wire 
ARDUINO_LIBS = LiquidCrystal_I2C Wire SHT3x

#include /usr/share/arduino/Arduino.mk
include /home/jc/AVR_mk_projects/Arduino.mk
