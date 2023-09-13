#include <stdio.h>
#include "main.h"
/**
* main - Entry point
*
* descripition: print the sum of even valued
*	Fibonacci sequance not exceed
*	4 million
*
* Return: always 0 (success)
*/

int main(void)
{
	unsigned long f1, f2, f;
	float total_sum;

	f1 = 0;
	f2 = 1;

	while (1)
	{
		f = f1 + f2;
		if (f > 4000000)
			break;
		if ((f % 2) == 0)
			total_sum += f;

		f1 = f2;
		f2 = f;
	}
	printf("%.0f\n", total_sum);
	return (0);
}
