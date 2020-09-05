CC = gcc
PGNAME = mainapp
OBJS = akagi.o misaki.o

$(PGNAME): $(OBJS)
	$(CC) -o $@ $^

akagi.o: akagi.c
	$(CC) -c -o $@ $<

misaki.o: misaki.c
	$(CC) -c -o $@ $<

.PHONY: clean
clean:
	rm -f $(PGNAME) $(OBJS)
