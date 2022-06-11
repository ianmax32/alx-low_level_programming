#include <stdio.h>

/**
 * main - program prints fizz on multiples of thr33 and buzz
 * on multiples of 5 and fizzbuz on multiples of both
 *
 * Description: program list numbers from 10 to 100 and checks multiples 
 * of three and five
 * Return:0
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
		{
			printf("%s ","Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("%s ","Buzz");
		}
		else if (a % 3 == 0 || a % 5 == 0)
		{
			printf("%s ","FizzBuzz");
		}
		else
			printf("%d ",a);
	}
	printf('\n');
}

