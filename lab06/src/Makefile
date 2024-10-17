#Breaks compiling into steps

GCC:=gcc
CFLAGS:=-Wall

timeConv: timeConv.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

checkArr: checkArr.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

base2dec: base2dec.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

randomSentence: randomSentence.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

%.o: %.c
	gcc -c $^

PHONY: clean install Package

clean:
	rm -f *.o timeConv checkArr

install:
	mv timeConv ../bin/ && mv checkArr ../bin/

Package:
	tar -czvf cmpt201_lab06_AOB.tar.gz lab06

