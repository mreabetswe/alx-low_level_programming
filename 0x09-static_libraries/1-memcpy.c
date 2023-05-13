#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: input
 * @src: input
 * @n: input
 * Return: Always 0 (success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int b = 0;
	int e = n;

	for (; b < e; b++)
	{
		dest[b] = src[b];
		n--;
	}
	return (dest);
}
