#include "main.h"

/**
* print_sign - function to check if
*	number  
*
* @c: checks input of function
*
* Return: Returns 1 and prints + if n is greater than zero
* Returns 0 and prints 0 if n is zero
* Returns -1 and prints - if n is less than zero (Success)
*/

int print_sign(int n)
{
	if (n > 0)
	{
	printf("+");
	return (1);
	}
	else if (n < 0)
	{
	printf("-");
	return (-1);
	}
	else
	{
	printf("0");
	return (0);
	}
}
