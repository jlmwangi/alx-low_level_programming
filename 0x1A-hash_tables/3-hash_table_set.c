#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hash table
 * @ht: pointer to hash_table_t
 * @key: constant character
 * @value: constant char
 *
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *nodenode;
	hash_node_t *newnode = malloc(sizeof(hash_node_t));

	if (newnode == NULL)
		return (0);
	if (ht == NULL || key == NULL)
		return (0);

	newnode->key = strdup(key);
	newnode->value = strdup(value);
	idx = key_index((unsigned char *)key, ht->size);
	newnode->next = NULL;
	nodenode = ht->array[idx];

	while (nodenode != NULL)
	{
		if (strcmp(nodenode->key, newnode->key) == 0)
		{
			free(nodenode->value);
			nodenode->value = strdup(value);
			free(newnode->value);
			free(newnode->key);
			free(newnode);
			return (1);
		}
		nodenode = nodenode->next;
	}
	newnode->next = ht->array[idx];
	ht->array[idx] = newnode;

	return (1);
}
