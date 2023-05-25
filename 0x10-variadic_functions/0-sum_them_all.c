#include "variadic_functions.h"

/**
 * sum_them_all - prints out the sum of  its parameters
 * @n: the number of times parameters are passed through
 * to the function
 * Return: 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int p = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);
		while (p < n)
		{
			sum += va_arg(args, int);
			p++;
		}
		va_end(args);
		return (sum);
	}
	return (0);
}
