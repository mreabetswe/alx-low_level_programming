#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - it links two strings
 * @s1: the first string value
 * @s2: second string value
 * Return: null when unsuccessful
 */

char *str_concat(char *s1, char *s2)
{
	int m = 0, t = 0, a = 0, r = 0;
	char *b;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[m])
		m++;

	while (s2[t])
		t++;

	r = m + t;
	b = malloc((sizeof(char) * r) + 1);

	if (b == NULL)
		return (NULL);

	t = 0;

	while (a < r)
	{
		if (a <= m)
			b[a] = s1[a];

		if (a >= m)
		{
			b[a] = s2[t];
			t++;
		}

		a++;
	}

	b[a] = '\0';
	return (b);
}
