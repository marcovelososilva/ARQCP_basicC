#makefile EXERCICE 04
default: run

sumEvenRun : main.o sum_even.o
	gcc -Wall main.o sum_even.o -o sumEvenRun

main.o: main.c
	gcc -c main.c -o main.o

power.o: sum_even.c
	gcc -c sum_even.c -o sum_even.o

run: sumEvenRun
	./sumEvenRun

clean:
	rm main.o sum_even.o sumEvenRun

