#Breaks compiling into two steps

GCC:=gcc
CFLAGS:=-Wall

learn: learndatatypes.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

asciiCode: ascii.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

gravity: gravity.o
	$(GCC) $(CFLAGS) -o $@ $^ -lm

%.o: %.c
	gcc -c $^

PHONY: clean install Package

clean:
	rm -f *.o learn asciiCode

install:
	mv learn ../bin/ && mv asciiCode

#Package:
	#tar -czvf tarAndcompress.tar.gz lab02
