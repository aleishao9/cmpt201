#Breaks compiling into steps

GCC:=gcc
CFLAGS:=-Wall

contains: contains.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm
checkfor: checkformat.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm
checkFile: checkFilename.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

%.o: %.c
	gcc -c $^

PHONY: clean install Package

clean:
	rm -f *.o contains checkfor checkFile

install:
	mv contains ../bin/ && mv checkfor ../bin/ && mv checkFile ../bin/

Package:
	tar -czvf cmpt201_lab04_AOB.tar.gz lab04

