#
# Brief: 	Makefile to compile and link my own cat command
# Author: 	Lautaro R. Ocampo
# Date: 	Aug 26, 2019
# Execute make clean to remove object files and executables

CC=gcc
CFLAGS=-c -Wall

OBJS=mi_cat.o

.PHONY: clean

mi_cat: $(OBJS)
	$(CC) $(OBJS)  -o $@
jercicio 1
%.o: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJS) mi_cat
