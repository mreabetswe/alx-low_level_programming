#include "main.h"
#include <stdio.h>

/**
 * main - It prints out the name of the program
 * @argc: The number of arguments passed to a program.
 * @argv: Variable that constitutes arguments passed
 * to a program via command line
 * Return: Void (success)
 */

int main(int argc, char *argv[])
{
	int l;

	for (l = 0; l < argc; l++)
{
	printf("%s\n", argv[l]);
}
return (0);
}
