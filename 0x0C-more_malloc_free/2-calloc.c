#include "main.h"
#include <stdlib.h>

/**
  * _calloc n - it prints out a function that allocates
  * memory for an array, using malloc.
  * @nmemb:the number of members
  * @size: size of the bytes
  *
  * Return: Nothing
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, e = 0;
	char *b;

	if (nmemb == 0 || size == 0)
		return (NULL);

	e = nmemb * size;
	b = malloc(e);

	if (b == NULL)
		return (NULL);

	while (a < e)
	{
		b[a] = 0;
		a++;
	}

	return (b);
}
