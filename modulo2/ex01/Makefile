#makedir EXERCIO 01 - modulo 2
default: run

m02e01: main.o asm.o
	gcc -Wall -g main.o asm.o -o m02e01

main.o: main.c
	gcc -Wall -g -c main.c -o main.o

asm.o: asm.s
	gcc -Wall -g -c asm.s -o asm.o

run: m02e01
	./m02e01

clean: *.o
	rm *.o m02e01
