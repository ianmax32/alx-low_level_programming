#include <unistd.h>

/**
 * _putchar - function prints the character
 * @a-parameter to print
 * Return:0
 */

int _putchar(char a)
{
	return (write(1, &a, 1));
}
