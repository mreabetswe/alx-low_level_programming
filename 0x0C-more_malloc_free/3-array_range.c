#include "main.h"
#include <stdlib.h>

/**
  * array_range - it prints out a function
  * that creates an array of integers.
  * @min: inputed value 1
  * @max: inputed value 2
  *
  * Return: the pointer to the newly created array.
  */

int *array_range(int min, int max)
{
	int *s, h = 0;

	if (min > max)
		return (NULL);

	s = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (s == NULL)
		return (NULL);

	while (min <= max)
	{
		s[h] = min;
		h++;
		min++;
	}

	return (s);
}
