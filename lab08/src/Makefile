#Breaks compiling into steps

GCC:=gcc
CFLAGS:=-Wall

loadDistance: loadDistance.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

%.o: %.c
	gcc -c $^

PHONY: clean install Package

clean:
	rm -f *.o loadDistance

install:
	mv loadDistance .. /bin/

Package:
	tar -czvf cmpt201_lab08_AOB.tar.gz lab08