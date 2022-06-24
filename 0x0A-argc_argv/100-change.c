#include <stdio.h>
#include <stdlib.h>

/**
 * main - program prints the minimum number of
 * coins to make change for an amount of money
 * @argc:counter for the number of arguments passed
 * @argv:array of the arguments passed
 * Return:0
 */

int main(int argc, char *argv[])
{
	int coins = 0;
	int remaining;

	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		remaining = atoi(argv[1]);
		if (remaining < 0)
			printf("%d\n", 0);
		while (remaining >= 0)
		{
			if (remaining >= 25)
			{
				coins += 1;
				remaining = remaining - 25;
			}
			else if (remaining >= 10 && remaining < 25)
			{
				coins += 1;
				remaining = remaining - 10;
			}
			else if (remaining >= 5 && remaining < 10)
			{
				coins += 1;
				remaining = remaining - 5;
			}
			else if (remaining >= 2 && remaining < 5)
			{
				coins++;
				remaining = remaining - 2;
			}
			else
			{
				remaining--;
				coins++;
			}
		}
		printf("%d\n", coins - 1);
		}
	}
	return (0);
}
