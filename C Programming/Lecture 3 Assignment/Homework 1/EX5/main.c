/*
 * main.c
 *
 *  Created on: Jul 10, 2022
 *      Author: Omar Mekkawy
 */

// Include standard IO library
#include <stdio.h>

// Global variables
char input_char;

int main(void)
{
	printf("Enter a character: ");								// Ask the user to enter two float numbers
	fflush(stdin);												// flush input buffer
	fflush(stdout);												// flush output buffer
	scanf("%c",&input_char);									// assign the input from the user to the addresses of variables
																// %c (character) format specifier
	printf("ASCII value of %c = %i",input_char, input_char);	// print the ASCII value for the character
	return 0; // return no error
}
