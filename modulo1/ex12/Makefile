#makefile EXERCICE 12
default: run

capitalizeRUN : main.o capitalize.o
	gcc -Wall main.o capitalize.o -o capitalizeRUN

main.o: main.c
	gcc -Wall -c main.c -o main.o

capitalize.o: capitalize.c
	gcc -Wall -c capitalize.c -o capitalize.o

run: capitalizeRUN
	./capitalizeRUN

clean:
	rm main.o capitalize.o capitalizeRUN

