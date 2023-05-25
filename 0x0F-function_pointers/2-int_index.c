#include "function_pointers.h"

/**
 * int_index - it points out an integer
 * @array: collection of elements
 * @size: amount of elements in the array
 * @cmp: a pointer used to compare values
 * Return: Nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (k < size)
			{
				if (cmp(array[k]))
					return (k);

			k++;
			}
		}
	}

	return (-1);
}
