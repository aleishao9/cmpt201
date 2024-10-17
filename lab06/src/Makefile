#Breaks compiling into steps

GCC:=gcc
CFLAGS:=-Wall

timeConv: timeConv.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

checkArr: checkArr.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

loadData: loadData.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

%.o: %.c
	gcc -c $^

PHONY: clean install Package

clean:
	rm -f *.o timeConv checkArr loadData

install:
	mv timeConv ../bin/ && mv checkArr ../bin/ && mv loadData ../bin/

Package:
	tar -czvf cmpt201_lab06_AOB.tar.gz lab06

