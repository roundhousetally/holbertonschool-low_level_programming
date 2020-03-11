#include "function_pointers.h"
#include <stdlib.h>
/**
 *array_iterator - performs a function on each array element
 *@array: Array to perform function on
 *@size: size of array
 *@action: pointer to function
 *
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
