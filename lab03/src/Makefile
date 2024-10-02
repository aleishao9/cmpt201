#Breaks compiling into two steps

GCC:=gcc
CFLAGS:=-Wall

learn: learndatatypes.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

asciiCode: ascii.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

gravity: gravity.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

gravity2: gravity2.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

%.o: %.c
	gcc -c $^

PHONY: clean install Package

clean:
	rm -f *.o learn asciiCode gravity gravity2

install:
	mv learn ../bin/ && mv asciiCode ../bin/ && mv gravity ../bin/ && mv gravity2 ../bin/

Package:
	tar -czvf tarAndcompress.tar.gz lab03
