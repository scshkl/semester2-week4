CC = gcc
CFLAGS = -Wall -g

all: string_ops substring

string_ops: string_ops.c
	$(CC) $(CFLAGS) string_ops.c -o string_ops

substring: substring.c
	$(CC) $(CFLAGS) substring.c -o substring

.PHONEY: clean
clean:
	rm -f string_ops substring