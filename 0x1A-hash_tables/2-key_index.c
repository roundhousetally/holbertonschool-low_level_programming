#include "hash_tables.h"

/**
 * key_index - returns the index where the key/value pair is stored.
 * @key: the key
 * @size: size of the array of hashtable
 * Return: index of key pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int keyval;

	keyval = hash_djb2(key);

	keyval = keyval % size;

	return (keyval);
}
