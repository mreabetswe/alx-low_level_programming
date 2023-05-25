#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prinits out strings
 * @separator: the string to be printed out
 * @n: the number of strings passed
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int r = 0;
	char *string;

	if (n > 0)
	{
		va_start(args, n);

		while (r < n)
		{
			string = va_arg(args, char *);
			if (string == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", string);

			if (r != n - 1 && separator != NULL)
				printf("%s", separator);

			r++;
		}

		va_end(args);
	}

	printf("\n");
}
