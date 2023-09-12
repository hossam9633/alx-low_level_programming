#include "main.h"

/**
* print_sign - print + is n greater than zero.
*	0 if n is zero and - if n is less than zero
*
* @c: take int type input of function
*
* Return: Returns 1 if + , 0 if 0 and -1 if -
*/

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
