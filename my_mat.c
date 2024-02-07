#include <stdio.h>
#include "my_mat.h"
#define rows 10
#define columns 10

void initialize(int matrix[columns][rows]) {

    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            //printf("Enter the value for matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void path(int matrix[columns][rows]) {
    
    int c = 0;
    int r = 0;

    //printf("Enter which vertices you want to check");
    scanf("%d" "%d" , &c ,&r);

    for (int i = 0; i < columns; i++){
        for (int j = 0; j < rows; j++){
            if(i == j){matrix[i][j] = __INT_MAX__;}
            if(matrix[i][j] == 0){matrix[i][j] = __INT_MAX__;}
        }
        
    }
    
    for(int k=0 ; k < columns ; k++){
        for(int i=0 ; i < columns ; i++){
            for (int j = 0; j < rows; j++){
                if(matrix[c][r] > matrix[c][k] + matrix[k][r]){matrix[c][r] = matrix[c][k] + matrix[k][r];}
            }
        }
    }
    if (matrix[c][r] != __INT_MAX__){printf("True");}
    else{printf("False");}
    
}

void shortestPath(int matrix[columns][rows]) {

    int c = 0;
    int r = 0;

    //printf("Enter which vertices you want to check");
    scanf("%d" "%d" , &c ,&r);

    for (int i = 0; i < columns; i++){
        for (int j = 0; j < rows; j++){
            if(i == j){matrix[i][j] = __INT_MAX__;}
            if(matrix[i][j] == 0){matrix[i][j] = __INT_MAX__;}
        }
        
    }
    

    for(int k=0 ; k < columns ; k++){
        for(int i=0 ; i < columns ; i++){
            for (int j = 0; j < rows; j++){
                 if(matrix[c][r] > matrix[c][k] + matrix[k][r]){matrix[c][r] = matrix[c][k] + matrix[k][r];}
            }
        }
    }
    if(matrix[c][r] !=  __INT_MAX__){printf("%d", matrix[c][r]);}
    else{printf("%d", -1;)}
}