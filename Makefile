CC=gcc
CFLAGS=-Wall -Wextra -g

SOURCES:=$(shell echo *.c)
OBJECTS:=$(patsubst %.c,%.o,${SOURCES})
TARGETS:=$(patsubst %.c,%,${SOURCES})

all: $(TARGETS)



clean:
	rm -f -R $(OBJECTS) $(TARGETS) *.dSYM