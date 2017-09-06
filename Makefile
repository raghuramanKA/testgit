CC=gcc
CFLAGS=-I.

all: 
	$(CC) -o test1 test.c -I.
	$(CC) -o test2 testprint.c -I.
clean:
	rm -rf test1 test2 

