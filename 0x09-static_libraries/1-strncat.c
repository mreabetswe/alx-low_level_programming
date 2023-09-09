#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * main - Check the code
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int t;
	int s;

	t = 0;
	while (dest[t] != '\0')
	{
	t++;
	}
	s = 0;
	while (s < n && src[s] != '\0')
	{
	dest[t] = src[s];
	t++;
	s++;
	}
	dest[t] = '\0';
	return (dest);
}
