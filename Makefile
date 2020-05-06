CC=gcc
CFLAGS=-Wall -std=c99

average: main.o average.o
	$(CC) -o average main.o average.o
