#makefile EXERCICE 14
default: run

frequenciesRUN : main.o frequencies.o
	gcc -Wall main.o frequencies.o -o frequenciesRUN

main.o: main.c
	gcc -c main.c -o main.o

frequencies.o: frequencies.c
	gcc -c frequencies.c -o frequencies.o

run: frequenciesRUN
	./frequenciesRUN

clean:
	rm main.o frequencies.o frequenciesRUN

