#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - this program assigns random numbers and prints them
 * Description: the assigned number in the variable is displayed as 
 * a positive or nagative.
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	
	return (0);
}
