CFLAGS = -Wall -Werror -pedantic -std=gnu99 -Wwrite-strings
reverse: reverse.o
	gcc $(CFLAGS) -o $@ $^
%.o: %.c
	gcc $(CFLAGS) -c $<
.PHONY: clean
clean: 
	rm -rf *.o reverse *~