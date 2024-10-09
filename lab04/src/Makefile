#Breaks compiling into steps

GCC:=gcc
CFLAGS:=-Wall

contains: contains.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm
checkformat: checkformat.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm
checkFilename: checkFilename.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

%.o: %.c
	gcc -c $^

PHONY: clean install Package

clean:
	rm -f *.o contains checkformat checkFilename

install:
	mv contains ../bin/ && mv checkformat ../bin/ && mv checkFilename ../bin/

Package:
	tar -czvf cmpt201_lab04_AOB.tar.gz lab04

