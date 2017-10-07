exercicio15: main.o isConsecutive.o fillRandomValues.o numSets.o
	gcc -Wall main.o isConsecutive.o fillRandomValues.o numSets.o -o exercicio15

main.o: main.c
	gcc -Wall -c main.c -o main.o

isConsecutive.o: isConsecutive.c
	gcc -Wall -c isConsecutive.c -o isConsecutive.o
	
fillRandomValues.o: fillRandomValues.c
	gcc -Wall -c fillRandomValues.c -o fillRandomValues.o

numSets.o: numSets.c
	gcc -Wall -c numSets.c -o numSets.o

run: exercicio15
	./exercicio15

clean: *.o
	rm *.o
	rm *.gch
