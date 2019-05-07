
#-----------------------------------------------------------------------
APP       := MTT
TARGET    := demo
#-----------------------------------------------------------------------

CFLAGS   = -g -fPIC -Wno-deprecated -Wall -fpermissive -pthread
INC      = -I. -Igoogletest/include/
LIB      = googletest/lib/libgtest.a googletest/lib/libgmock.a 
SRC      += $(wildcard *.cpp)

CXX = g++
CC  = gcc

all : $(TARGET)

autotest:
	@+make all TFLAGS=AUTO_TEST

ifeq ($(TFLAGS),AUTO_TEST)
CFLAGS += -DUNIT_TEST
endif
	

$(TARGET) : $(SRC)
	$(CXX) $^ -o $@ $(CFLAGS) $(INC) $(LIB)

.PHONY: list clean

list:
	@echo $(TARGET)

clean:
	@rm $(TARGET) 
