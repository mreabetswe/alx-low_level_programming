#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - it prints out a function that
 * allocates memory using malloc.
 * @b: inputed value
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}
