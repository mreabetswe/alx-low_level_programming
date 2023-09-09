#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
	int value;

	value = 2;

	if (value & 1)
	{
		return (0);
	}

	return (1);
}
