CC = gcc 
CFLAGS = -Wall -Wextra -pedantic 
TARGET = avanzada

all: $(TARGET)

$(TARGET): avanzada.o
	$(CC) $(CFLAGS) $^ -o $@

avanzada.o: avanzada.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm *.o $(TARGET)

.PHONY: all clean
