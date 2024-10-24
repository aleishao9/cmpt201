#Breaks compiling into steps

GCC:=gcc
CFLAGS:=-Wall

lab07: test_pointerFun.o pointerFun.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

%.o: %.c
	gcc -c $^

PHONY: clean install Package

clean:
	rm -f *.o lab07

install:
	mv lab07 ../bin/

Package:
	tar -czvf cmpt201_lab07_AOB.tar.gz lab07
