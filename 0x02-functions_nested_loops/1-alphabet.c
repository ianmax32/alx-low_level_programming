#include "main.h"

/**
 * print_alphabet - this program prints the alphabet
 * description: the alphabet should be printed in lowercase
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
_putchar('\n');
}
