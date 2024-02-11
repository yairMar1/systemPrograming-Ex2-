#include<stdio.h>
#include "my_Knapsack.h"
#define prudacts 5
#define capacity 20

int main(){

char items [prudacts];
int values [prudacts];
int weights [prudacts];
 int selected_bool[prudacts] = {0};

 for (size_t i = 0; i < prudacts; i++) {//Taking values from the user
        scanf(" %c %d %d", &items[i], &values[i], &weights[i]);
    }

int maxProfit = knapSack(weights, values, selected_bool);
printf("Maximum profit: %d" ,maxProfit);
printf("\n");
printf("Selected items:");

for (size_t i = 0; i < prudacts; i++){//Going over the array that says which item to take and printing the item
    if(selected_bool[i] == 1){printf(" %c" ,items[i]);}
}

return 0;
}
int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapSack(int weights[], int values[] , int selected_bool[]){

int bag [prudacts+1][capacity+1];
//The actual algorithm that produces a table of taking an item or not taking an item
for (size_t i = 0; i <= prudacts; i++){
    for (size_t w = 0; w <= capacity; w++){
        
        if (i==0 || w==0){bag[i][w] = 0;}

        else if(weights[i-1]<=w){bag[i][w] = max(values[i-1]+bag[i-1][w-weights[i-1]],bag[i-1][w]);}

        else {bag[i][w] = bag[i-1][w];}

    }
    
}
int i = prudacts;
int j = capacity;

while (i > 0 && j > 0) {//Implementation of the array that will say where we "took" an item
    if (bag[i][j] == bag[i - 1][j]) {
        selected_bool[i - 1] = 0; 
        i--;
    } else {
        selected_bool[i - 1] = 1; 
        j = j - weights[i - 1]; 
        i--;
    }
}

return (bag [prudacts][capacity]);

}