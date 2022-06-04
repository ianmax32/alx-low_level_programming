#include <stdio.h>

/**
 * main - this program prints possible combinations of three digits
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
	int d;
	while (a < 999)
	{
		b = ((a / 100) + '0');
		c = ((a % 10) + '0');
		d = ((a / 10 % 10) + '0');
		if ((b < d) && (d < c))
		{
			putchar(b);
			putchar(d);
			putchar(c);
			if (a != 789)
			{
				putchar(',');
				putchar(' ');
			}
		a++;
	}
	putchar('\n');
	return (0);
}
