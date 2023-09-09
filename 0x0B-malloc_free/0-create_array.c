#include "main.h"
#include <stdlib.h>

/**
 * create_array - constructs an array of chars,
 * intializing it to a specific char.
 * @size: array size
 * @c: input char value
 * Return: NULL if size is 0.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int r;
	char *b;

	if (size == 0)
		return (NULL);

	b = malloc(size * sizeof(char));

	if (b == NULL)
		return (NULL);

	for (r = 0; r < size; r++)
	{
		b[r] = c;
	}

	return (b);
}
