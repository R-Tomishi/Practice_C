CC=gcc
PGNAME=Message
OBJS=main.o sub.o

$(PGNAME): $(OBJS)
	$(CC) -o $@ $^

.c.o:
	$(CC) -c -o $@ $<

.PHONY: clean
clean:
	rm -f $(PGNAME) $(OBJS)

.PHONY: doc
doc:
	doxygen

.PHONY: all
all: clean $(PGNAME) doc
