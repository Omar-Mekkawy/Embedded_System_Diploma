/*
 * main.c
 *
 *  Created on: Jul 10, 2022
 *      Author: Omar Mekkawy
 */

// Include standard IO library
#include <stdio.h>

// Global variables
int input_number;

int main(void)
{
	printf("Enter a integer : ");				// Ask the user to enter an int. number
	fflush(stdin);								// flush input buffer
	fflush(stdout);								// flush output buffer
	scanf("%i",&input_number);					// assign the input from the user to the address of input_number variable
												// %i (including the sign)
	printf("You entered: %i",input_number);		// print the input_number with the %i (including the sign)
	return 0; // return no error
}
