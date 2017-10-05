mygame: main.o palindrome.o
	gcc -Wall main.o palindrome.o -o exercicio11

main.o: main.c
	gcc -Wall -c main.c -o main.o

sort_without_reps.o: palindrome.c
	gcc -Wall -c palindrome.c -o palindrome.o	

run: exercicio11
	./exercicio11

