#Breaks compiling into steps

GCC:=gcc
CFLAGS:=-Wall

loadDistance: loadDistance.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

create_string: create_string.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

%.o: %.c
	gcc -c $^

PHONY: clean install Package

clean:
	rm -f *.o loadDistance create_string

install:
	mv loadDistance .. /bin/ && mv create_string .. /bin/

Package:
	tar -czvf cmpt201_lab08_AOB.tar.gz lab08