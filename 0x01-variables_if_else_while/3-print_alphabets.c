#include <stdio.h>

/**
* main - print alphabet in lower case
*
* Description: using putchar function only in the main method
*
* Return: 0
*/

int main(void)
{
char a;
for (a = 'a' ; a <= 'z' ; a++)
{
        putchar(a);
}
for (a = 'A' ; a <= 'Z' ; a++)
{
        putchar(a);
}
putchar('\n');
return (0);
}

