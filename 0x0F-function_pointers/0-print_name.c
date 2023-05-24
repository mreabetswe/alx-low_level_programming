#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints out a name
 * @name: what is to be printed
 * @f: a pointer to the function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
