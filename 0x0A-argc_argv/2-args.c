#include <stdio.h>

/**
 * main - program print all the arguments it received
 * @argc:function argument counter
 * @argv:array f all arguments passed to the program
 * Return:0
 */

int main(int argc, char *argv[])
{
	int a = 0;

	while (a < argc)
	{
		printf("%s\n", argv[a]);
		a++;
	}
	return (0);
}
