#include <stdio.h>

/**
 * main - print al single digit number of base 10 starting from 0
 *
 * Description: using the main function
 * this program prints the number in putchar function
 * Return: 0
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
	putchar((i % 10) + '0');
}
putchar('\n');
return (0);
}

