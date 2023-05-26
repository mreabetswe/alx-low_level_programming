#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers -prints out numbers
 * @separator - string to be printed
 * @n: the number integers passed to the function
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
unsigned int i;

va_start(list, n);

for (i = 0; i < n; i++)
{
	printf("%i", va_arg(list, int));
	if (i != n - 1 && separator != NULL)
		printf("%s", separator);
}
va_end(list);

putchar('\n');
}
