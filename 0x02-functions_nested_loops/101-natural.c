#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * descroption: main computes the sum of all
 *	the multiples of 3 or 5
 *	below 1024 (excluded)
 *
 * @return: 0 if  (success)
 */

int main(void)
{
	int num;
	int sum = 0;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
