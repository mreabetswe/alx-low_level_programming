#include "main.h"
#include <stdio.h>

/**
 * main - It prints out the number of arguments passed (argc)
 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
