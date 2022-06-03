#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - this program compares values.
 *
 * Description: the program generates a random number and
 * compares the values
 *
 * Return: 0
 */

int main(void)
{
int n;
int a;

srand(time(0));
n = rand() - RAND_MAX / 2;
a = n % 10;
/* your code goes there */
if (n > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, a);
}
else if (n == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, a);
}
else
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
}
return (0);
}
