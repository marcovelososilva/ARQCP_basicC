exercicio11: main.o palindrome.o
	gcc -Wall main.o palindrome.o -o exercicio11

main.o: main.c
	gcc -Wall -c main.c -o main.o

palindrome.o: palindrome.c
	gcc -Wall -c palindrome.c -o palindrome.o	

run: exercicio11
	./exercicio11

clean: *.o
	rm *.o
