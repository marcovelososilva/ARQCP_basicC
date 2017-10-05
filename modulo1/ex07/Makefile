exercicio07: main.o array_sort.o
	gcc -Wall main.o array_sort.o -o exercicio07

main.o: main.c
	gcc -Wall -c main.c -o main.o

array_sort.o: array_sort.c
	gcc -Wall -c array_sort.c -o array_sort.o

run: exercicio07
	./exercicio07

clean: *.o
	rm *.o
