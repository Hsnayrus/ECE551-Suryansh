CFLAGS = -Wall -Werror -pedantic -std=gnu99
test: test.o
	gcc -o test test.o
%.o: %.c
	gcc -c $(CFLAGS) $^
.PHONY: clean
clean:
	rm -rf test *.o *.dSYM*