exercicio09: main.o sort_without_reps.o
	gcc -Wall main.o sort_without_reps.o -o exercicio09

main.o: main.c
	gcc -Wall -c main.c -o main.o

sort_without_reps.o: sort_without_reps.c
	gcc -Wall -c sort_without_reps.c -o sort_without_reps.o	

run: exercicio09
	./exercicio09
	
clean: *.o
	rm *.o

