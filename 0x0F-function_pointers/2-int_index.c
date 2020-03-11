#include "function_pointers.h"
/**
 *int_index - returns index of compared int
 *@array: array
 *@size: array size
 *@cmp:pointer to function
 *
 *Return: index of compared int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	if (cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
