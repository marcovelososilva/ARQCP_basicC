#makefile EXERCICE 18
default: run

compressRUN : main.o compress.o
	gcc -Wall main.o compress.o -o compressRUN

main.o: main.c
	gcc -c main.c -o main.o

frequencies.o: frequencies.c
	gcc -c compress.c -o compress.o

run: compressRUN
	./compressRUN

clean:
	rm main.o compress.o compressRUN

