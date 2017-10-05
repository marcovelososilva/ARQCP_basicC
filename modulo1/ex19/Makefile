default: run

exercicio19: main.o find_word.o
	gcc -Wall main.o find_word.o -o exercicio19

main.o: main.c
	gcc -Wall -c main.c -o main.o

find_word.o: find_word.c
	gcc -Wall -c find_word.c -o find_word.o

run: exercicio19
	./exercicio19
