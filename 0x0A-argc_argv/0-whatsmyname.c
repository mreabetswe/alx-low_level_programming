#include "main.h"
#include <stdio.h>

/**
 * main - It prints out the name of the program
 * @argc: The number of arguments passed to a program.
 * @argv: Variable that constitutes arguments passed
 * to a program via command line
 * Return: Void (success)
 */

int main(int argc __attribute__((unused)), char *argv[])

{
	printf("%s\n", *argv);

	return (0);
}
