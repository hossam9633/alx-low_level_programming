#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * descripition: print the first 50 Fibonacci nymbers
 *	starting with 1 and 2 folled by a new line
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int count;
	int f1, f2, f;

	f1 = 0;
	f2 = 1;

	for (count = 0; count <= 50; count++)
	{
		f = f1 + f2;
		printf("%d", f);

		f1 = f2;
		f2 = f;

		if (count == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}

