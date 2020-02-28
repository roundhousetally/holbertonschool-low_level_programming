#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main- entry point
 *
 *@argc: argument count
 *@argv:arguments
 *
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 0; i < argc; i++)
	{
		if (isdigit(atoi(argv[i])))
		{
			sum += atoi(argv[i]);
			printf("%d\n", sum);
		}
		else if (argc == 0)
		{
			printf("0\n");
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
		return (0);
}
