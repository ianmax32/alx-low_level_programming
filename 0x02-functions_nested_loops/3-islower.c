#include "main.h"

/**
 * _islower - method returns 1 is c is lower or
 * o if not.
 * @c : this is an int argument to be used in the function
 *Description: return either 1 is lower or 0 if not
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
