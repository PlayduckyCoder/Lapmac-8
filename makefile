CC=gcc
CFLAGS=-Wall -g

all: lapmac8

lapmac8: main.c cpu/executor.c memory/memory.c
	$(CC) $(CFLAGS) -o lapmac8 main.c cpu/executor.c memory/memory.c

clean:
	rm -f lapmac8
