#include <stdio.h>
/**
* main - print alphabet in lower case except q and e
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
	if (a != 'q' && a != 'e')
	{
		putchar(a);
	}
}
putchar('\n');
return (0);
}

