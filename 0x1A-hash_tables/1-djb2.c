#include "hash_tables.h"

/**
 * hash_djb2 - hash function implementing djb2 algorithm
 * @str: const unsigned char
 *
 * Return: unsigned long int
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	int n;
	unsigned long int hash;

	hash = 5381;
	while ((n = *str++))
	{
		hash = ((hash << 5) + hash) + n; /* hash * 33 + c */
	}
	return (hash);
}
