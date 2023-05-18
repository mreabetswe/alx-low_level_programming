#include <stdio.h>
#include <stdlib.h>

/**
 * main - it prints the minimum number of
 * coins to make change for an amount of money.
 * @argc: the number of arguments passed to a program.
 * @argv: variable that constitutes arguments passed.
 * to a program via command line.
 * Return: if 0 then it will be a success
 * print 1 if it is an error
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}

	printf("%d\n", coins);

	return (0);
}
