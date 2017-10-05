exercicio13: main.o foundwhere.o
	gcc -Wall main.o foundwhere.o -o exercicio13

main.o: main.c
	gcc -Wall -c main.c -o main.o

foundwhere.o: foundwhere.c
	gcc -Wall -c foundwhere.c -o foundwhere.o	

run: exercicio13
	./exercicio13

clean: *.o
	rm *.o
