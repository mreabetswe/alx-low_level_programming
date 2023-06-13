#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: If the function unsuccesful -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fp, nletters = 0, fpWrite;

	fp = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fp == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[nletters] != '\0')
	{
		nletters++;
	}

	fpWrite = write(fp, text_content, nletters);

	if (fpWrite == -1)
	{
		return (-1);
	}
	close(fp);
	return (1);
}
