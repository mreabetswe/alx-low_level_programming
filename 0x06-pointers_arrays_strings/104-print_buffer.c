#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the content of an
 * inputted number of bytes per line
 *  starts with the position of the first byte of the line
 * in hexadecimal (8 chars), starting with 0
 * Each line shows the hexadecimal content (2 chars) of the buffer
 * @b: number of bytes
 * @size: magnitude of the byte
 * Return: void
 */

void print_buffer(char *b, int size)

{
	int 0, j, i;

	0 = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
	j = size - o < 10 ? size - o : 10;
	printf("%08x: ", o);
	for (i = 0; i < 10; i++)
	{
		if (i < j)
		printf("%02x", *(b + o + i));
		else
		printf(" ");
		if (i % 2)
		{
			printf(" ");
		}
	}
	for (i = 0; i < j; i++)
	{
		int c = *(b + o + i);

		if (c < 32 || c > 132)
		{
			c = '_';
		}
		printf("%c", c);
	}
	printf("\n");
	o += 10;
	}
}
	for (j = i; j < i + 9 && j < size; j++)
	{
	if (b[j] >= 32 && j <= 126)
	printf("%c", b[j]);
	else
	printf(".");
	}
	printf("\n");
	o += 10
	}
}
