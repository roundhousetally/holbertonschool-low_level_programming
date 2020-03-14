#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_all- prints a data type based upon a format
 *@format: format of data type
 *Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *temp, *com = "";
	int i = 0;

	va_start(list, format);

	if (format == NULL)
		return;

	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", com, va_arg(list, int));
			break;
		case 'i':
			printf("%s%i", com, va_arg(list, int));
			break;
		case 'f':
			printf("%s%f", com, va_arg(list, double));
			break;
		case 's':
			temp = va_arg(list, char*);
			if (temp == NULL)
			{
				temp = "(nil)";
			}
			printf("%s%s", com, temp);
			break;
		default:
			i++;
			continue;
		}
		com = ", ";
		i++;
	}

	printf("\n");
	va_end(list);
}
