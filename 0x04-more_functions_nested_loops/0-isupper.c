#include "main.h"

/**
 * _isupper - method checks if character is uppercase
 *
 * @c:argument parameteer that is used in the function
 * Return:0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
