CC = gcc
CFLAGS = -Wall

all: test

test: test.c solution.c
	$(CC) $(CFLAGS) test.c ../../utils/timer.c -o test

run: test
	./test

clean:
	rm -f test
