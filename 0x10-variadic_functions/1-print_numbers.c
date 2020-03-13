#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - prints numbers passed to it
 *
 *@separator: separates numbers
 *@n: amount of ints to print
 *
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list argpt;

	va_start(argpt, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(argpt, int));

		if (i + 1 < n && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(argpt);
}
