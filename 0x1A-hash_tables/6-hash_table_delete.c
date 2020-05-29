#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp1;
	unsigned int i = 0;

	while (i < ht->size)
	{
		temp1 = ht->array[i];
		while (temp1)
		{
			free(temp1->key);
			free(temp1->value);
			temp1 = temp1->next;
			free(temp1);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
