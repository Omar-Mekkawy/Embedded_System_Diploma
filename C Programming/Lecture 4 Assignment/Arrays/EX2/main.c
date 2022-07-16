/*
 * main.c
 *
 *  Created on: Jul 11, 2022
 *      Author: Omar Mekkawy
 */

// Include standard IO library
#include <stdio.h>

#define Default_Array_Size 100

unsigned int numbersCount;
float Numbers[Default_Array_Size];
float sum;
float average;

int main(void) {

	printf("Enter the numbers of data: \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &numbersCount);

	if ((numbersCount > Default_Array_Size) || (numbersCount < 0)) {
		printf("Numbers count should be less than or equal %d",Default_Array_Size);

	} else {
		for (int i = 0; i < numbersCount; i++) {
			printf("%d. Enter number: ", i + 1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f", &Numbers[i]);
			sum += Numbers[i];
		}

		average = sum / numbersCount;
		printf("Average = %.2f", average);
	}

	return 0;
}
