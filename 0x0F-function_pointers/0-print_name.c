#include "function_pointers.h"

/**
 *print_name - assigns name to function pointer f
 *@f: function pointer
 *@name: passed arg
 *
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
