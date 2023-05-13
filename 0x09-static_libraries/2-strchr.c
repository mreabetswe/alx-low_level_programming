#include "main.h"
#include <stddef.h>
/**
* _strchr - Entry point
* @s: entered value
* @c: entered value
* Return: Always 0 (Success)
*/

char *_strchr(char *s, char c)
{
	int k;

	for (k = 0; s[k] >= '\0'; k++)
	{
	if (s[k] == c)
	return (s + k);
	}
	return (NULL);
}
