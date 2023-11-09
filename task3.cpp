#include <iostream>
#include <time.h>
#include <stdlib.h>
int main(){
    srand(time(0));
    const int ROWS = 3;
    const int COLUMNS = 3;
    int array[ROWS][COLUMNS];
    printf("\n----------------------------\n");
    for(int index = 0;index < ROWS;index++){
        for(int j = 0;j < COLUMNS;j++){
            array[index][j] = rand() % 20 - 10;
            printf("%4d",array[index][j]);}
    printf("\n");}
    printf("----------------------------\n");
    const int NUMBER = ROWS * COLUMNS;
    int flatarray[NUMBER];
    for(int index = 0;index < 3;index++){
        for(int j = 0;j < 3;j++){
            flatarray[index * COLUMNS + j] = array[index][j];}}
    for(int index = 0;index < NUMBER;index++){
        for(int j = 0;j < NUMBER;j++){
            if(flatarray[j] > flatarray[j + 1]){
                int temp = flatarray[j];
                flatarray[j] = flatarray[j + 1];
                flatarray[j + 1] = temp;}}}
    for(int index = 0;index < NUMBER;index++){printf("%3d",flatarray[index]);}
    printf("\n----------------------------\n");
    for(int index = 0;index < ROWS;index++){
        int j;
        for(j = 0;j < COLUMNS;j++){
            array[index][j] = flatarray[index * COLUMNS + j];
            printf("%4d",array[index][j]);}
            printf("\n");}
    printf("----------------------------\n");
    return 0;}