#include <stdio.h>

/**
 * main - program prints the number of arguments passed to it
 * @argc:count for the number of arguments
 * @argv:pointer array to the argument parameters
 * Return:0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
