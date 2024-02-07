main.o: main.c my_mat.o
	gcc -Wall -c -o main.o main.c my_mat.o

my_mat.o: my_mat.c my_mat.h
	gcc -c my_mat.c -o my_mat.o

my_graph: main.o
	gcc -Wall main.o -o my_graph

.PHONY: clean all

all: my_graph

clean:
	rm -f *.o my_graph