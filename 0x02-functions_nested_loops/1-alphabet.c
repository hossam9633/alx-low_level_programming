#include "main.h"

/**
* main - entry point
*
* Description: for loop  putchar to print lowercase and upper  alphapet
*
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	_putchar(ch);
	}
	_putchar('\n');
}
