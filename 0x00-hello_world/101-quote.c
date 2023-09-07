#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A C Programm that print with put function
 *
 *Return: alawys 0 (success)
 */

int main()
{
       	const char* phrase = "and that piece of art is useful - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s", phrase);

	return 0;
}
