CFLAGS = -Wall -Werror -pedantic -std=gnu99 -Wwrite-strings

numToBits: numToBits.c
	gcc $(CFLAGS) -o $@ $^
.PHONY: clean
clean:
	rm -rf *.o *~ numToBits