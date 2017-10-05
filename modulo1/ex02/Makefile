#makefile EXERCICE 04
default: run

inputVec : main.o input_vec.o
	gcc -Wall main.o input_vec.o -o inputVec

main.o: main.c
	gcc -c main.c -o main.o

input_vec.o: input_vec.c
	gcc -c input_vec.c -o input_vec.o

run: inputVec
	./inputVec

clean:
	rm main.o input_vec.o inputVec

