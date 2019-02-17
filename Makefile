ARDUINO_DIR  = /usr/share/arduino
BOARD_TAG    = nano328
ARDUINO_PORT = /dev/ttyUSB0
PROJECT_DIR   = $(shell pwd)
USER_LIB_PATH += $(realpath $(PROJECT_DIR)/libraries)

include /usr/share/arduino/Arduino.mk
