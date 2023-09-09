#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - it prints out a function that reallocates
 * a memory block using malloc and free
 * @ptr: a pointer to the malloc memory
 * @old_size: the size of the allocated space in bytes
 * @new_size: the size of the allocated new space in bytes
 *
 * Return: nothing
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int w;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		nptr = malloc(new_size);

		if (nptr == NULL)
			return (NULL);

		return (nptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	nptr = malloc(new_size);

	if (nptr == NULL)
		return (NULL);

	for (w = 0; w < old_size && w < new_size; w++)
	{
		nptr[w] = ((char *) ptr)[w];
	}

	free(ptr);
	return (nptr);
}
