#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *op_add - adds two ints
 *
 *@a: first int
 *@b: second int
 *
 *Return: result
 */
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - subtracts two ints
 *@a: first int
 *@b:second int
 *
 *Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - multiplies two numbers together
 *
 *@a: first int
 *@b: second int
 *
 *Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - divides two ints
 *
 *@a: first int
 *@b: second int
 *
 *Return: result
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
 *op_mod - gets the remainder from two ints
 *
 *@a: first int
 *@b: second int
 *
 *Return: result
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
