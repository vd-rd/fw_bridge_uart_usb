PROJECT = mpcie_gps
BUILD_DIR = ../output
SHARED_DIR = ../lib

CFILES = main.c 

DEVICE = stm32f072ceva
OOCD_FILE = board/stm32f0nucleo.cfg

# You shouldn't have to edit anything below here.
VPATH += $(SHARED_DIR)
INCLUDES += $(patsubst %,-I%, . $(SHARED_DIR))
OPENCM3_DIR=../libopencm3

include $(OPENCM3_DIR)/mk/genlink-config.mk
include ../rules.mk
include $(OPENCM3_DIR)/mk/genlink-rules.mk