CC = gcc
PGNAME = mainapp
OBJS = akagi.o misaki.o

$(PGNAME): $(OBJS)
	$(CC) -o mainapp $(OBJS)

akagi.o: akagi.c
	$(CC) -c -o akagi.o akagi.c

misaki.o: misaki.c
	$(CC) -c -o misaki.o misaki.c

.PHONY: clean
clean:
	rm -f $(PGNAME) $(OBJS)
