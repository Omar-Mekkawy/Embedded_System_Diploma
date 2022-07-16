/*
 * main.c
 *
 *  Created on: Jul 11, 2022
 *      Author: Omar Mekkawy
 */

// Include standard IO library
#include <stdio.h>

// Make the Matrix size configurable :D (Extra idea)
#define Matrix_Number_Of_Rows 2
#define Matrix_Number_Of_Columns 2

float FirstMatrix[Matrix_Number_Of_Rows][Matrix_Number_Of_Columns];
float SecondMatrix[Matrix_Number_Of_Rows][Matrix_Number_Of_Columns];

int i,j;

int main(void) {


	printf("Enter the elements of 1st matrix\n");
	for(i=0;i<Matrix_Number_Of_Rows;i++)
	{
		for(j=0;j<Matrix_Number_Of_Columns;j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&FirstMatrix[i][j]);
		}
	}

	printf("Enter the elements of 2nd matrix\n");
	for(i=0;i<Matrix_Number_Of_Rows;i++)
	{
		for(j=0;j<Matrix_Number_Of_Columns;j++)
		{
			printf("Enter b%d%d: ",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&SecondMatrix[i][j]);
		}
	}

	printf("Sum Of Matrix:\n");

	for(i=0;i<Matrix_Number_Of_Rows;i++)
	{
		for(j=0;j<Matrix_Number_Of_Columns;j++)
		{
			printf("%.2f",FirstMatrix[i][j]+SecondMatrix[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	return 0;
}
