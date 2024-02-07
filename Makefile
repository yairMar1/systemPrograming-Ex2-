connections: main.o my_mat.o
	gcc -Wall -o connections main.o my_mat.o 

main.o: main.c my_mat.h
	gcc -Wall -c main.c -o main.o

my_mat.o: my_mat.c my_mat.h
	gcc -Wall -c my_mat.c -o my_mat.o
	
.PHONY: clean all

all: connections

clean:
	rm -f *.o connections
