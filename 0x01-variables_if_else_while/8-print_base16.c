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
	int b;

	for (a = 0; a <= 9; a++)
	{
	putchar('0' + a);
	}
	for (b = 97; b <= 102; b++)
	{
	putchar(b);
	}
	putchar('\n');
	return (0);
}
