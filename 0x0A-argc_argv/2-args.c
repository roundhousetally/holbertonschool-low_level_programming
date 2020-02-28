#include "holberton.h"
#include <stdio.h>

/**
 *main - entry point
 *
 *@argc: unused
 *@argv: puts program name
 *
 *Return: 0 on success, every argument passed to it.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
