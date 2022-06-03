include <stdio.h>

/**
 * main - print al single digit number of base 10 starting from 0
 *
 * Description: using the main function
 * this program prints the number in putchar function
 * Return: 0
 */
int main(void)
{
char i;
for (i = '0'; i < '9'; i++)
{
	putchar(i);
}
for (i = 'a'; i < 'f'; i++)
{
	putchar(i);
}
putchar('\n');
return (0);
}
