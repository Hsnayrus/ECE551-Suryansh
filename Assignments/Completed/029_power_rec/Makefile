CFLAGS=-Wall -Werror -pedantic -std=gnu99
test-power: power.o test-power.c
	gcc $(CFLAGS) -o test-power test-power.c power.o
power.o: power.c
	gcc $(CFLAGS) -c power.c
