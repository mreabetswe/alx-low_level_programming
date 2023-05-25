#include "function_pointers.h"

/**
 * array_iterator - runs a function given
 * as a parameter on each element array
 * @array: collection of elements
 * @size: How many arrays to print
 * @action: the pointer to function needed
 * to be printed
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int l;

	if (array == NULL || action == NULL)
		return;
	for (l = 0; l < size; l++)
	{action(array[l]);
	}
}
