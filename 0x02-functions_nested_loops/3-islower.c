#include 'main.h'

/**
 * _islower(int c) - method returns 1 is c is lower or
 * o if not.
 *
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
