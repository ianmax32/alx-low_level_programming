#include <stdio.h>

/**
 * main - prints the size of various types
 *
 * Description: declarations of types and print their sizes
 * Return: 0
 */

int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float e;

	printf("Size of a char: %1d bytes(s)\n",sizeof(a));
	printf("Size of an int: %1d bytes(s)\n", sizeof(b));
	printf("Size of a long int: %1d bytes(s)\n", sizeof(c));
	printf("Size of a long long int: %1d bytes(s)\n", sizeof(d));
	printf("Size of a float: %1d bytes(s)\n", sizeof(e));
	return (0);
}
