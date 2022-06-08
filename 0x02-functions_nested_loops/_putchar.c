#include <unistd.h>

/**
 * _putchar - writes the character to the output
 * @c: argument variable to print
 * Return:0
 */

int _putchar(int c)
{
	return (write(1, &c,1));
}
