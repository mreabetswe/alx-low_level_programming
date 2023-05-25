#include <stdlib.h>
#include <stdio.h>
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
	va_list args;
	unsigned int p = 0;

	if (n > 0)
	{
		va_start(args, n);

		while (p < n)
		{
			printf("%d", va_arg(args, int));

			if (p != n - 1  && separator != NULL)
				printf("%s", separator);

			p++;
		}
		va_end(args);
	}
	printf("\n");
}
