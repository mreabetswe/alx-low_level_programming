#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int r, index = 0;
	unsigned long int value;

	for (r = 63; r >= 0; r--)
	{
		value = n >> r;

		if (value & 1)
		{
			_putchar('1');
		index++;
		}
		else if (index)
			_putchar('0');
	}
	if (!index)
		_putchar('0');
}
