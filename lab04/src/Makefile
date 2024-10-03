#Breaks compiling into two steps

GCC:=gcc
CFLAGS:=-Wall

contains: contains.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

%.o: %.c
	gcc -c $^

PHONY: clean install Package

clean:
	rm -f *.o contains

install:
	mv contains ../bin/ &&

Package:
	tar -czvf cmpt201_lab04_AOB.tar.gz lab04

