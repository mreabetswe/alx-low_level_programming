#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string
 * s of any of the bytes in the string accept
 * @s: input
 * @accept: input
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int f;

	while (*s)
	{
		for (f = 0; accept[f]; f++)
		{
			if (*s == accept[f])
				return (s);
		s++;
		}
		return ('\0');
	}
}
