#include "main.h"

/**
 * is_prime_number - function checks if number of prime or not
 * @n:argument parameter representing number to be checked
 * Return:0
 */

int is_prime_number(int n)
{
	if (n < 0 || n == 1 || (n % 2 == 0))
		return (0);
	return (1);
}
