#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - address of the marking at end of the
 *            first word within a string.
 * @str: string to be searched.
 *
 * Return: The marking at the end of the 1st word pointed out by str.
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}

	return (len);
}

/**
 * count_words - Counts the number of words within a string.
 * @str: The string to be searched.
 *
 * Return: total number of words within str.
 */
int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}

	return (words);
}

/**
 * strtow - a fuction that splits a string into words.
 * @str: string to be split.
 *
 * Return: If str = NULL, str = "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **strings;
	int index = 0, words, g, letters, y;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (g = 0; g < words; g++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_len(str + index);

		strings[g] = malloc(sizeof(char) * (letters + 1));

		if (strings[g] == NULL)
		{
			for (; g >= 0; g--)
				free(strings[g]);

			free(strings);
			return (NULL);
		}

		for (y = 0; y < letters; y++)
			strings[g][y] = str[index++];

		strings[g][y] = '\0';
	}
	strings[g] = NULL;

	return (strings);
}
