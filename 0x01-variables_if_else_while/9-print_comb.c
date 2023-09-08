#include <stdio.h>

/**
* main - entry point
*
* Description: for loop an inside it putchar to print alphapet
*
* Return: alawys 0 (success)
*/

int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
	putchar('0' + a);
	if (a != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
