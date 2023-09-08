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

	for (a = 122; a >= 97; a--)
	{
	putchar(a);
	}
	putchar('\n');
	return (0);
}
