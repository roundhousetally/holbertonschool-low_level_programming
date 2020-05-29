#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: key
 * @value: the val
 * Return: 1 on success 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hi, i;
	char *vcopy;
	hash_node_t *newn;

	if (!key || !ht)
		return (0);

	hi = key_index((const unsigned char *)key, ht->size);

	vcopy = strdup(value);
	if (!vcopy)
		return (0);

	for (i = hi; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = vcopy;
			return (1);
		}
	}
	newn = malloc(sizeof(hash_node_t));
	if (!newn)
	{
		free(vcopy);
		return (0);
	}
	newn->key = strdup(key);
	if (!newn->key)
	{
		free(newn);
		return (0);
	}
	newn->value = vcopy;
	newn->next = ht->array[hi];
	ht->array[hi] = newn;
	return (1);
}
