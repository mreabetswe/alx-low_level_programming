#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - it prints out the name of the program
 * @str: the string array
 * Return: Void (success)
 */

int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;
	while (count < strlen(str)) /*count string*/
	{
		if (isxdigit(str[count])) /* check if the string is a digit*/
		{
		return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - it prints out the name of the program.
 * @argc: the number of arguments passed to a program.
 * @argv: variable that constitutes arguments passed
 * to a program via command line
 * Return: Void (success)
 */

int main(int argc, char *argv[])
{
	/* Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[count]))
		{
		str_to_int = atoi(argv[count]); /*ATOI, converts string to integer*/
		sum += str_to_int;
		}
		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
		printf("Error\n");
		return (1);
		}
		count++;
	}
printf("%d\n", sum); /*It prints sum*/
return (0);
}
