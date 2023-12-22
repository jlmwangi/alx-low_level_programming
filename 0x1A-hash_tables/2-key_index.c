#include "hash_tables.h"
/**
 * key_index - returns index of a key
 * @key: const unsigned char
 * @size: unsigned long int
 *
 * Return: unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int hash;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
