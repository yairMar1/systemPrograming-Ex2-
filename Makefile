main.o: main.c my_mat.o
	gcc -Wall -c -o main.o main.c my_mat.o

my_mat.o: my_mat.c my_mat.h
	gcc -c my_mat.c -o my_mat.o

connections: main.o
	gcc -Wall main.o -o connections

.PHONY: clean all

all: connections

clean:
	rm -f *.o connections