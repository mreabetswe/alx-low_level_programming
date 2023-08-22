#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copies at most an inputted number
 * of bytes from string src inito dest.
 * @dest: The buffer storing the string copy
 * @src: The source string.
 * @n: The max number of bytes to be copied
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
