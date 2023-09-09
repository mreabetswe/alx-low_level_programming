#include "main.h"

/**
 * _memset - Enty point
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes
 * Return: Always 0 (success)
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int w;

	for (w = 0; w < n; w++)
		s[w] = b;
	return (s);
}
