CC = gcc
CFLAGS = -Wall -g

all: scanf_str scanf_test

scanf_str: scanf_str.c
	$(CC) $(CFLAGS) scanf_str.c -o scanf_str

scanf_test: scanf_test.c
	$(CC) $(CFLAGS) scanf_test.c -o scanf_test

.PHONEY: clean
clean:
	rm -f scanf_str scanf_test