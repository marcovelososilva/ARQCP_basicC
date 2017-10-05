exercicio05: main.o transformation.o
	gcc -Wall main.o transformation.o -o exercicio05

main.o: main.c
	gcc -Wall -c main.c -o main.o

transformation.o: transformation.c
	gcc -Wall -c transformation.c -o transformation.o	

run: exercicio05
	./exercicio05

clean: *.o
	rm *.o
