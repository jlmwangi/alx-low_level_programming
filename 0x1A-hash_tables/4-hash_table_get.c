#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated with a key
 * @ht: const hash_table_t
 * @key: const char
 *
 * Return: char
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *array;

	index = key_index((unsigned char *)key, ht->size);
	array = ht->array[index];

	if (ht == NULL || key == NULL)
		return (NULL);

	while (array != NULL)
	{
		if (strcmp(array->key, key) == 0)
		{
			return (array->value);
		}
		array = array->next;
	}
	return (NULL);
}
