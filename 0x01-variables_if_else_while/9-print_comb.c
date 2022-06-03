#include <stdio.h>
/**
 * main - printing single digit numbers seperated by commas and space between them
 * Description: using the main function
 * this program prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9" using putchar function
 * Return: 0
 */
int main(void)
{
int c;
for (c = 0; c < 10; c++)
{
	putchar((c % 10) + '0');
	if (c != 9)
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return 0;
}
