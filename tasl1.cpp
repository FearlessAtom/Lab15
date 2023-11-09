#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    srand(time(0));
    const int NUMBER = 5;
    int array[NUMBER][NUMBER];
    printf(" ---- Unsorted ----\n");
    for(int index = 0;index < NUMBER;index++){
        for(int j = 0;j < NUMBER;j++){
            array[index][j] = rand() % 20 - 10;
            printf("%3d ",array[index][j]);}
            printf("\n");}
    printf(" ----- Sorted -----\n");
    
    for (int index = 0; index < NUMBER - 1; index++) {
        int maxIndex = index;
        for (int j = index + 1; j < NUMBER; j++) {
            if (array[j][j] > array[maxIndex][maxIndex]) {maxIndex = j;}}
            int temp = array[index][index];
            array[index][index] = array[maxIndex][maxIndex];
            array[maxIndex][maxIndex] = temp;}

    for(int index = 0;index < NUMBER;index++){
        for(int j = 0;j < NUMBER;j++){
            printf("%3d ",array[index][j]);}
    printf("\n");}
    return 0;}