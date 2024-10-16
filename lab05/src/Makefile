#Breaks compiling into steps

GCC:=gcc
CFLAGS:=-Wall

strlength: strlength.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

lawn: lawn.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

base2dec: base2dec.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

randomSentence: randomSentence.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

%.o: %.c
	gcc -c $^

PHONY: clean install Package

clean:
	rm -f *.o strlength lawn base2dec

install:
	mv strlength ../bin/

Package:
	tar -czvf cmpt201_lab05_AOB.tar.gz lab05

