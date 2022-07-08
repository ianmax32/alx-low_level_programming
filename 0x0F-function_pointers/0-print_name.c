#include "function_pointers.h"

/**
 * print_name - function prints a name
 * @name:name to be printed
 * @f:function to a pointer pointer
 * Return:0
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
