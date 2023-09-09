#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - It prints out the name of the program
 * @argc: The number of arguments passed to a program.
 * @argv: Variable that constitutes arguments passed
 * to a program via command line
 * Return: Void (success)
 */

int main(int argc, char *argv[])
{
	int e1 = 0, e2 = 0;

	if (argc == 3)
	{
		e1 = atoi(argv[1]);
		e2 = atoi(argv[2]);
		printf("%d\n", e1 * e2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
