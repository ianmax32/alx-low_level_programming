#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse
 *
 * Description: using the main function
 * this program usese putchar to print the alphabet
 * Return: 0
 */
int main(void)
{
char i;
for (i = 'z'; i >= 'a'; i--)
{
        putchar(i);
}
putchar('\n');
return (0);
}

