#include<stdio.h>
#include"my_mat.h"

#define rows 10
#define columns 10

int main(){

int matrix [columns][rows];

char x;

//printf("Choose a letter");
scanf("%c" , &x);

if(x == 'A'){initialization(matrix);}
else if(x == 'B'){path(matrix);}
else if(x == 'C'){int result = shortestPath(matrix);
        printf("Shortest path: %d\n", result);}
if(x == 'D'){return 0;}//finish the program

return 0;
}