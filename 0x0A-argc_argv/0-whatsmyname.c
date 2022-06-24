#include <stdio.h>
#include "main.h"

/**
 * main - program prints a name followed by new line
 * @argc:count for the number of arguments
 * @argv:array pointer that points t the string arguments
 * Return:0
 */

int main(int argc, char *argv[])
{
	int a = 0;

	while (a < argc)
	{
		printf("%s\n",argv[a]);
		a++;
	}
	return (0);
}
