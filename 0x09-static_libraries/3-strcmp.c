#include "main.h"

/**
 * _strcmp - function compares two strings
 * @s1:first argument parameter to compare
 * @s2:second argument parameter to compare
 * Return:0
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0'; a++)
	{
		if (s1[a] < s2[a])
			return (s1[a] - s2[a]);
		if (s1[a] > s2[a])
			return (s1[a] - s2[a]);
	}
	return (0);
}
