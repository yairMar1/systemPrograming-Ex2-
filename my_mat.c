#include <stdio.h>
#include "my_mat.h"
#include <limits.h>
#define rows 10
#define columns 10

void initialize(int matrix[columns][rows]) {

    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void path(int matrix[columns][rows]) {
    
    int c = 0;
    int r = 0;

    scanf("%d" "%d" , &c ,&r);

    for (int i = 0; i < columns; i++){
        for (int j = 0; j < rows; j++){
            //if(i == j){matrix[i][j] = 0;}
            //if(matrix[i][j] == 0){matrix[i][j] = INT_MAX;}
            if(i == j || matrix[i][j] == 0){matrix[i][j] = INT_MAX;}
        }
    }
    
    for(int k=0 ; k < columns ; k++){
        for(int i=0 ; i < columns ; i++){
            for (int j = 0; j < rows; j++){
                 if(i == j || matrix[i][j] == 0){matrix[i][j] = INT_MAX;}
                 else if (matrix[i][k] == INT_MAX || matrix[k][j] == INT_MAX ){continue;}
                 else if (matrix[i][j] > matrix[i][k] + matrix[k][j]) {matrix[i][j] = matrix[i][k] + matrix[k][j];}
             }
        }
    }
    if (matrix[c][r] != INT_MAX){printf("True\n");}
    else{printf("False\n");}
    
}

void shortestPath(int matrix[columns][rows]) {

    int c = 0;
    int r = 0;

    scanf("%d" "%d" , &c ,&r);

    //for (int i = 0; i < rows; i++){
      //  for (int j = 0; j < columns; j++){
        //    if(i == j){matrix[i][j] = 0;}
          //  if(matrix[i][j] == 0){matrix[i][j] = INT_MAX;}
      //  }
    //}
    
    for(int k=0 ; k < rows ; k++){
        for(int i=0 ; i < rows ; i++){
            for (int j = 0; j < columns; j++){
                 if( i == j || matrix[i][j] == 0){matrix[i][j] = INT_MAX;}
                 else if (matrix[i][k] == INT_MAX || matrix[k][j] == INT_MAX ){continue;}
                 else if (matrix[i][j] > matrix[i][k] + matrix[k][j]) {matrix[i][j] = matrix[i][k] + matrix[k][j];}
            }
        }
    }
    if(matrix[c][r] !=  INT_MAX){printf("%d\n", matrix[c][r]);}
    else{printf("%d\n", -1);}
}