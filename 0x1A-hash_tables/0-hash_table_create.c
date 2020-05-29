#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: size of table
 * Return: pointer to new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable;
	unsigned int i;

	/** if size too small, no table bby */
	if (size < 1)
	{
		return (NULL);
	}
	newtable = malloc(sizeof(hash_table_t));
	/** allocate for table */
	if (newtable == NULL)
	{
		return (NULL);
	}
	/** allocate for entries */
	newtable->array = malloc(sizeof(hash_node_t *) * size);
	newtable->size = size;
	if (newtable->array == NULL)
	{
		return (NULL);
	}
	/** set table to NULL and return new table */
	for (i = 0; i < size; i++)
	{
		newtable->array[i] = NULL;
	}
	return (newtable);
}
