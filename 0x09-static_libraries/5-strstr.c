#include <stdio.h>
#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack
 * @haystack: entered point
 * @needle: entered point
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *g = haystack;
		char *s = needle;

		while (*g == *s && *s != '\0')
		{
			g++;
			s++;
		}
		if (*s == '\0')
			return (haystack);
	}
	return (0);
}
