CC = gcc
PGNAME = mainapp
OBJS = akagi.o misaki.o

$(PGNAME): $(OBJS)
	$(CC) -o $@ $^

.c.o:
	$(CC) -c -o $@ $<

.PHONY: clean
clean:
	rm -f $(PGNAME) $(OBJS)
