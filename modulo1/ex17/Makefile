exercicio17: main.o swap.o
	gcc -Wall main.o swap.o -o exercicio17

main.o: main.c
	gcc -Wall -c main.c -o main.o

swap.o: swap.c
	gcc -Wall -c swap.c -o swap.o	

run: exercicio17
	./exercicio17

clean: *.o
	rm *.o
