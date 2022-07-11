/*
 * main.c
 *
 *  Created on: Jul 11, 2022
 *      Author: Omar Mekkawy
 */

// Include standard IO library
#include <stdio.h>

// Global variables
char character;

int main(void)
{
	printf("Enter an alphabet: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c", &character);
	// Could be done with if statement but I want to try something new :D
	switch(character)
	{
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
		printf("%c is vowel",character);
		break;
	default:
		printf("%c is consonant",character);
	}

	return 0; // return no error
}
