#include "main.h"
#include <stddef.h>

/**
 * _strlen - returns the length of a string
 * @s: input value
 * Return: The length  of a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
