#Breaks compiling into two steps

GCC:=gcc
CFLAGS:=-Wall

loggy: logConversion.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

%.o: %.c
	gcc -c $^

PHONY: clean install Package

clean:
	rm -f *.o loggy triggy

install:
	mv loggy ../bin/ && mv triggy ../bin/

triggy: trig.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

randy: randRange.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

Package:
	tar -czvf tarAndcompress.tar.gz lab02
