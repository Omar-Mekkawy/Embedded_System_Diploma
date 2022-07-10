/*
 * main.c
 *
 *  Created on: Jul 10, 2022
 *      Author: Omar Mekkawy
 */

// Include standard IO library
#include <stdio.h>

// Global variables
float input_number1;
float input_number2;

int main(void)
{
	printf("Enter two numbers : ");						// Ask the user to enter two float numbers
	fflush(stdin);										// flush input buffer
	fflush(stdout);										// flush output buffer
	scanf("%f %f",&input_number1,&input_number2);		// assign the inputs from the user to the addresses of variables
														// %f (float numbers) format specifier
	printf("Product: %f",input_number1 * input_number2);	// print the input_number with the %i (including the sign)
	return 0; // return no error
}
