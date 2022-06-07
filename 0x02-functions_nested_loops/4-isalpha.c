#include "main.h"

/**
 * _isalpha - method returns 1 is c is lower or
 * o if not.
 * @c : argument varible to be used in the function
 *Description: return either 1 is lower or 0 if not
 * Return: 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
		return (1);
	 }
	else
		return (0);
}
