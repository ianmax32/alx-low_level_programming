#include <stdio.h>

/**
 * main - this program prints possible combinations of two digits
 *
 * Description: the numbers printed must be seperated by using putchar
 *
 * Return:0
 */

int main(void)
{
	int a = 0;
	int b;
	int c;

	while (a < 99)
	{
		b = ((a / 10) + '0');
		c = ((a % 10) + '0');

		if (b < c)
		{
			putchar(b);
			putchar(c);

			if (a != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
