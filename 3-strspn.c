#include "main.h"

/**
 * _strspn - finds the length of a prefix substring
 * @s: entered value
 * @accept: entered value
 *
 * Return: Always 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int h = 0;
	int t;

	while (*s)
	{
		for (t = 0; accept[t]; t++)
		{
			if (*s == accept[t])
			{
				h++;
				break;
			}
			else if (accept[t + 1] == '\0')
			return (h);
		}
		s++;
	}
	return (h);
}
