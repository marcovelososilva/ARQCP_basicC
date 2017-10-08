#makefile EXERCICE20
default: run

EXERCICE20 : main.o find_all_words.o find_word.o
	gcc -Wall main.o find_all_words.o find_word.o -o EXERCICE20

main.o: main.c
	gcc -c main.c -o main.o

find_word.o: find_word.c
	gcc -c find_word.c -o find_word.o

find_all_words.o: find_all_words.c
	gcc -c find_all_words.c -o find_all_words.o

run: EXERCICE20
	./EXERCICE20

clean:
	rm main.o compress.o EXERCICE20

