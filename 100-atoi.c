#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 * Return: A integer
 */

int _atoi(char *s)
{
	int e = 1, c = 0;
	unsigned int mh = 0;

	while (!(s[c] <= '9' && s[c] >= '0') && s[c] != '\0')
	{
		if (s[c] == '-')
			mh *= -1;
		c++;
	}
	while (s[c] <= '9' && (s[c] >= '0' && s[c] != '\0'))
	{
		mh = (mh * 10) + (s[c] - '0');
		c++;
	}
	mh *= e;
	return (mh);
}
