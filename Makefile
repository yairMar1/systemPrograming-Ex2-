main.o: main.c my_mat.o
	gcc -Wall -c -o main.o main.c my_mat.o

my_mat.o: my_mat.c my_mat.h
	gcc -c my_mat.c -o my_mat.o

main: main.o
	gcc -Wall main.o -o main

.PHONY: clean all

all: main

clean:
	rm -f *.o main