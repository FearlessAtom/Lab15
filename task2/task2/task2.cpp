#include <stdio.h>
int main() {
	const int ROWS = 4;
	const int COLUMNS = 3;
	int array[ROWS][COLUMNS] = {{  1,  2,  3},
								{  4,  5, -6},
								{  7,  8,  9},
								{-10, 11, 12}};
	printf("The matrix itself :\n");
	for (int index = 0; index < ROWS; index++) {
		for (int j = 0; j < COLUMNS; j++) {
			printf("%4d", array[index][j]);}
		printf("\n");}
	int sum = 0, result = 0;
	for (int j = 0; j < COLUMNS; j++) {
		bool found = false;
		sum = 0;
		for (int index = 0; index < ROWS; index++) {
			if (array[index][j] < 0) { found = true; break; }
			sum = sum + array[index][j];}
		if (!found)result = result + sum;}
	printf("The sum is : %d", result);
	return 0;}