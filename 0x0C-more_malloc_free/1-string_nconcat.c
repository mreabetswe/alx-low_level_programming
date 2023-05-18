#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - it prints out a function that links
 * two strings.
 * @s1: string 1 of the allocated space memory
 * @s2: steing 2 of the allocated space memory
 * @n: the number of bytes between s2 to s1
 * Return: Null, if unsuccessful
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int p = 0, t = 0, k = 0, r = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[p])
		p++;

	while (s2[k])
		k++;

	if (n >= k)
		r = p + k;
	else
		r = p + n;

	str = malloc(sizeof(char) * r + 1);
	if (str == NULL)
		return (NULL);

	k = 0;
	while (t < r)
	{
		if (t <= p)
			str[t] = s1[t];

		if (t >= p)
		{
			str[t] = s2[k];
			k++;
		}
		t++;
	}
	str[t] = '\0';
	return (str);
}
