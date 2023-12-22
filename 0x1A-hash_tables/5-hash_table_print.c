#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to const hash_table_t
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	char *com;

	if (ht == NULL)
		return;

	printf("{");
	com = "";
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("%s'%s' : '%s'", com, current->key, current->value);
			com = ", ";
			current = current->next;
		}
	}
	printf("}\n");
}
