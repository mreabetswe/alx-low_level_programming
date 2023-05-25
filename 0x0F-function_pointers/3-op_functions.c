#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - returns the sum
  * @a: entry point
  * @b: entry point
  *
  * Return: result
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - returns the difference between a & b
  * @a: entry value
  * @b: entry value
  *
  * Return: difference of a & b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - returns the product of a & b
  * @a: multiplicator 1
  * @b: multiplicator 2
  * Return: result
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - result of division
  * @a: divisor
  * @b: divident
  * Return: result
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - ruturns the remainder
  * @a: entry point
  * @b: entry point
  * Return: result
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
