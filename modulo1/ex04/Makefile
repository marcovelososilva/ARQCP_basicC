#makefile EXERCICE 04
default: run

tolowercase : main.o transformation.o
	gcc -Wall main.o transformation.o -o tolowercase

main.o: main.c
	gcc -c main.c -o main.o

transformation.o: transformation.c
	gcc -c transformation.c -o transformation.o

run: tolowercase
	./tolowercase

clean:
	rm main.o transformation.o tolowercase

