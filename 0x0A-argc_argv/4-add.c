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

	for (i = 1; argv[i] != '\0'; i++)
	{
		if (!(isdigit(*argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		else if (argc == 0)
		{
			printf("0\n");
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);

	return (0);
}
