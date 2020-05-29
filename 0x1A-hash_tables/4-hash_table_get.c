#include "hash_tables.h"

/**
 * hash_table_get -  retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *look;
	unsigned long int hk;

	if (!ht || !key)
		return (NULL);

	/** hash the key */
	hk = key_index((const unsigned char *)key, ht->size);
	/** look for slot */

	look = ht->array[hk];

	if (!look)
		return (NULL);

	while (look != NULL)
	{
		/** look to find matching key */
		if (strcmp(look->key, key) == 0)
		{/** return value at key */
			return (look->value);
		}
		look = look->next;
	}
	return (NULL);
}
