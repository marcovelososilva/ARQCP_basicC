#makedir EXERCIO 08
default: run
	run

exercicio08: main.o array_sort_pointer.o
	gcc -Wall main.o array_sort_pointer.o -o exercicio08

main.o: main.c
	gcc -Wall -c main.c -o main.o

array_sort_pointer.o: array_sort_pointer.c
	gcc -Wall -c array_sort_pointer.c -o array_sort_pointer.o

run: exercicio08
	./exercicio08

clean: *.o
	rm *.o exercicio08
