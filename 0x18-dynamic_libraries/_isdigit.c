#include "main.h"

/**
 * _isdigit - method checks is parameter is digit
 * @c: argument parameter to be chekd in the function
 * Return:0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
