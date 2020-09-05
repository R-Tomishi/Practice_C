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

.PHONY: check
check:
	cppcheck --enable=all /users/test > checkresult.txt 2>&1

.PHONY: doc
doc:
	doxygen

.PHONY: all
all: clean check $(PGNAME) doc
