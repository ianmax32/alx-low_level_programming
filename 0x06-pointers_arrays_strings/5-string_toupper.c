#include "main.h"

/**
 * string_toupper - function changes all the lowercase letters
 * to uppercase
 * @a:argument parameter representing pointer to the string
 * Return:0
 */

char *string_toupper(char *s)
{
	int a;

	while (s[a] != '\0')
	{
		if (s[a] >= 'a' && s[a] <= 'z')
			s[a] = s[a] - 32;
		a++;
	}
	return (0);
}
