#include<stdio.h>
#include"my_mat.h"

#define rows 10
#define columns 10

int main(){

int matrix [columns][rows];

char x;

//printf("Choose a letter");
scanf("%c", &x);

while(x != 'D'){
        if(x == 'A'){initialize(matrix);}
        else if(x == 'B'){path(matrix);}
        else if(x == 'C'){shortestPath(matrix);}
        //if(x == 'D'){return 0;}//finish the program
        scanf("%c", &x);
}

return 0;
}