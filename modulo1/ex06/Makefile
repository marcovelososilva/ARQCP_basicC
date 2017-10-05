#makefile EXERCICE 04
default: run

powerEXECUTE : main.o power.o
	gcc -Wall main.o power.o -lm -o powerEXECUTE

main.o: main.c
	gcc -c main.c -o main.o

power.o: power.c
	gcc -c power.c -lm -o power.o

run: powerEXECUTE
	./powerEXECUTE

clean:
	rm main.o power.o powerEXECUTE

