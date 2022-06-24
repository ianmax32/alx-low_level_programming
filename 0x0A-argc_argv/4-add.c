#include <stdio.h>
#include <stdlib.h>

/**
 * main - program adds positive numbers and prints
 * the results
 * @argc:counter to the number of arguments passed
 * @argv:array of all the argumnets passed
 * Return:0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int a = 0;

	if (argc <= 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		while (argc > 0 && argc--)
		{
			while (argv[argc][a] != '\0')
			{
				if (!(isdigit(argv[argc][a])))
				{
					printf("Error\n");
					return (1);
				}
				a++;
			}
			sum = sum + atoi(argv[argc]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
