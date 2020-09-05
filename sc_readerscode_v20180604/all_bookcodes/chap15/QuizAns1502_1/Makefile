Message: main.c sub.o
	gcc -o Message main.c sub.o

sub.o: sub.c
	gcc -c -o sub.o sub.c

.PHONY: clean
clean:
	rm -f Message sub.o
