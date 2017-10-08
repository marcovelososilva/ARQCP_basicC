exercicio3: main.o printEvenNumbersArray.o
	gcc -Wall main.o printEvenNumbersArray.o -o exercicio3

main.o: main.c
	gcc -Wall -c main.c -o main.o

printStuff.o: printStuff.c
	gcc -Wall -c printEvenNumbersArray.c -o printEvenNumbersArray.o	

run: exercicio3
	./exercicio3

clean: *.o
	rm *.o
	rm exercicio3
