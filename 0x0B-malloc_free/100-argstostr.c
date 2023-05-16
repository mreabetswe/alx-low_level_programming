#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - links all arguments of your program.
 * @ac: captures the width of the 2D array grid
 * @av: height of the 2D array grid
 * Return: a pointer to a new string, or NULL if unsuccesful.
 */

char *argstostr(int ac, char **av)
{
	int ch = 0, i = 0, j = 0, k = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			ch++;
			j++;
		}

		j = 0;
		i++;
	}

	p = malloc((sizeof(char) * ch) + ac + 1);

	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			p[k] = av[i][j];
			k++;
			j++;
		}

		p[k] = '\n';

		j = 0;
		k++;
		i++;
	}

	k++;
	p[k] = '\0';
	return (p);
}
