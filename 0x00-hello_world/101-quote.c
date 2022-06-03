#include <unistd.h>

/**
 * main - this is a program that printsa string without using
 * printf or puts.
 *
 * Description: the function should print and that piece of art is
 * useful"-Dora Korpar, 2015-10-19
 * Return: 1
 */

int main(void)
{
	write(1, "and that piece of art is useful\" -Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
