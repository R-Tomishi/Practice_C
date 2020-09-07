CC = gcc
PGNAME = mainapp
OBJS = practice31.o practice31_1.o

$(PGNAME): $(OBJS)
	$(CC) -o $@ $^

# practice31.o: practice31.c
# 	$(CC) -c -o $@ $<
#
# practice31_1.o: practice31_1.c
# 	$(CC) -c -o $@ $<

.c.o:
	$(CC) -c -o $@ $<

.PHONY: clean
clean:
	rm -f mainapp practice31.o, practice31_1.o
