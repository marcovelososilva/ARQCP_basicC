#makefile EXERCICE 16
default: run

existsRUN : main.o exists.o
	gcc -Wall main.o exists.o -o existsRUN

main.o: main.c
	gcc -c main.c -o main.o

exists.o: exists.c
	gcc -c exists.c -o exists.o

run: existsRUN
	./existsRUN

clean:
	rm main.o exists.o existsRUN

