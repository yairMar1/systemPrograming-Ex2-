#include<stdio.h>
#include "my_Knapsack.h"
#define prudacts 5
#define capacity 20

int main(){

char x = 0;
int y = 0;
int z = 0;

char items [prudacts];
int values [prudacts];
int weights [prudacts];
int selected_bool [prudacts];

for (size_t i = 0; i < prudacts; i++){
    items[i] = scanf("%c" , &x);
    values[i] = scanf("%d" , &y);
    weights[i] = scanf("%d" , &z);
}

int maxProfit = knapSack(weights, values, selected_bool);
printf("Maximum profit: %d" ,maxProfit);

int counter = 0;
for (size_t i = 0; i < prudacts; i++){
    if(selected_bool[i] == 1){counter++;}
}

printf("Items that give the maximum profit: [");

for (size_t i = 0; i < prudacts; i++){
    if(selected_bool[i] == 1){printf("%c" ,items[i]);}
    if(counter > 0){printf(", ");counter--;}
}
printf("]");

}
int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapSack(int weights[], int values[] , int selected_bool[]){

int bag [prudacts+1][capacity+1];

for (size_t i = 0; i <= prudacts; i++){
    for (size_t w = 0; w <= capacity; w++){
        
        if (i==0 || w==0){bag[i][w] = 0;}

        else if(weights[i]<=w){bag[i][w] = max(values[i]+bag[i-1][w-weights[i]],bag[i-1][w]);}

        else {bag[i][w] = bag[i-1][w];}

    }
    
}
int i = prudacts;
int j = capacity;

while (i>0 && j>0){
    if(bag[i][j] == bag[i-1][j]){selected_bool[i] = 0; i--;}
    else{selected_bool[i] = 1;i--;j=j-weights[i];}
}

return (bag [prudacts][capacity]);

}