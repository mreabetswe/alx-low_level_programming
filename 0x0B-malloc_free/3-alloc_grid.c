#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - prints out 2D array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: NULL if unsuccessful
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **s;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = malloc(sizeof(int *) * height);

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		s[i] = malloc(sizeof(int) * width);

		if (s[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(s[j]);
			}

			free(s);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			s[k][l] = 0;
		}
	}

	return (s);
}
