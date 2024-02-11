my_graph: main.o my_mat.o
	gcc -Wall -o my_graph main.o my_mat.o 

main.o: main.c my_mat.h
	gcc -Wall -c main.c -o main.o

my_mat.o: my_mat.c my_mat.h
	gcc -Wall -c my_mat.c -o my_mat.o


my_Knapsack: my_Knapsack.o
	gcc -Wall -o my_Knapsack my_Knapsack.o

my_Knapsack.o: my_Knapsack.c my_Knapsack.h
	gcc -Wall -c my_Knapsack.c -o my_Knapsack.o
	

.PHONY: clean all

all: my_graph my_Knapsack

clean:
	rm -f *.o my_graph my_Knapsack
