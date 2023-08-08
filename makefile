CC       = gcc
CFLAGS   = -g -Wall -Wextra -Wpedantic --std=c99
INCLUDES = -Iheaders
SOURCES  = sources/table.c sources/multiply.c
TARGET   = calc

build:
	$(CC) $(SOURCES) $(CFLAGS) $(INCLUDES) main.c -o $(TARGET)

clean:
	find . -type f -name $(TARGET) | xargs rm -rf

.PHONY: build clean
