/*
 * main.c
 *
 *  Created on: Jul 11, 2022
 *      Author: Omar Mekkawy
 */

// Include standard IO library
#include <stdio.h>

// Global variables
int number;

int main(void)
{

	printf("Enter an integer to check: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&number);

	if((number%2)==0)
	{
		// Number is even
		printf("The number %d is even",number);
	}
	else
	{
		// Number is odd
		printf("The number %d is odd",number);
	}

	return 0; // return no error
}
