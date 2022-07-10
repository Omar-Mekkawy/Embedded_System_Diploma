/*
 * main.c
 *
 *  Created on: Jul 10, 2022
 *      Author: Omar Mekkawy
 */

// Include standard IO library
#include <stdio.h>

// Global variables
int input_number1;
int input_number2;

int main(void)
{
	printf("Enter two integers : ");					// Ask the user to enter two int. numbers
	fflush(stdin);										// flush input buffer
	fflush(stdout);										// flush output buffer
	scanf("%i %i",&input_number1,&input_number2);		// assign the inputs from the user to the addresses of variables
														// %i (including the sign)
	printf("Sum: %i",input_number1 + input_number2);	// print the input_number with the %i (including the sign)
	return 0; // return no error
}
