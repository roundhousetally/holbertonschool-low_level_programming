#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 * Return - prints the table
 */

void hash_table_print(const hash_table_t *ht)
{
	const hash_table_t *look;
	unsigned int i = 0;
	int comstop = 1;

	look = ht;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht == NULL)
		{
			printf("{}");
			continue;
		}
		while (look->array[i] != NULL)
		{
			if (!comstop)
			{
				printf(", ");
				printf("'%s': '%s'", look->array[i]->key,
				       look->array[i]->value);
			}
			else
			{
				printf("'%s': '%s'", look->array[i]->key,
				       look->array[i]->value);
				comstop = 0;
			}
			look->array[i] = ((look->array[i])->next);
		}
	}
	printf("}");
	printf("\n");
}
