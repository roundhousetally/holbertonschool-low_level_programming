#include "search_algos.h"
/**
 * binary_search - searches for a value in an array using binary search
 * @array: the array to search
 * @size: size of the array
 * @value: the value to find
 * Return: return index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, st;
	size_t end = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);
	while (i <= end)
	{
		mid = (i + end) / 2;
		printf("Searching in array: ");
		for (st = i; st < end; st++)
			printf("%d, ", array[st]);
		printf("%d\n", array[st]);
		if (array[mid] < value)
			i = mid + 1;
		else if (array[mid] == value)
		{
			return (array[mid]);
		}
		else
			end = mid - 1;
	}
	return (-1);
}
