CC = gcc
PGNAME = mainapp
OBJS = akagi.o misaki.o
OBJST = List1514.o

$(PGNAME): $(OBJS)
	$(CC) -o $@ $^

List1514: $(OBJST)
	$(CC) -o $@ $^

.c.o:
	$(CC) -c -o $@ $<

.PHONY: clean
clean:
	rm -f $(PGNAME) $(OBJS) $(OBJST)

.PHONY: test
test: List1514
	./List1514

.PHONY: doc
doc:
	doxygen

.PHONY: all
all: clean $(PGNAME) test doc
