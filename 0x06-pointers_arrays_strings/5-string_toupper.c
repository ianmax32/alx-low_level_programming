#include "main.h"

/**
 * string_toupper - function changes all the lowercase letters
 * to uppercase
 * @a:argument parameter representing pointer to the string
 * Return:0
 */

char *string_toupper(char *)
{
	int a;

	while (*[a] != '\0')
	{
		if (*[a] >= 'a' && *[a] <= 'z')
			*[a] = *[a] - 32;
		a++;
	}
	return (0);
}
