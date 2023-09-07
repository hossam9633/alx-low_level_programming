#include <unistd.h>

/**
* main - entry point
*
* Description: print a qoute using write function
* write ( int fd.cinst void *buf,size_t count)
*
* Return: alawys 1 (not success)
*/

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	iwrite(1, quo, 59);
	return (1);
}
