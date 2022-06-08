#include "main.h"

/**
 * _abs - the method prints an absolute value
 * @c : arhument value to be inserted into the function
 * Return: 0
 */

int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (-1 * c);
}
