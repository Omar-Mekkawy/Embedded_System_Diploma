/*
 * main.c
 *
 *  Created on: Jul 10, 2022
 *      Author: Omar Mekkawy
 */

// Include standard IO library
#include <stdio.h>

// Global variables
float number_a;
float number_b;
float swapping_container;
int main(void)
{
	printf("Enter value of a: ");								// Ask the user to enter the number a
	fflush(stdin);												// flush input buffer
	fflush(stdout);												// flush output buffer
	scanf("%f",&number_a);										// assign the input from the user to the address of variable number_a
	printf("Enter value of b: ");								// Ask the user to enter the number b
	fflush(stdin);												// flush input buffer
	fflush(stdout);												// flush output buffer
	scanf("%f",&number_b);										// assign the input from the user to the address of variable number_a
	// Swapping process

	number_a = number_a + number_b;
	number_b = number_a - number_b;
	number_a = number_a - number_b;

	printf("After swapping, value of a = %.2f\n", number_a);	// Print the number_a with 2 digits after the decimal point
	printf("After swapping, value of b = %.2f", number_b);		// Print the number_b with 2 digits after the decimal point

	return 0; // return no error
}
