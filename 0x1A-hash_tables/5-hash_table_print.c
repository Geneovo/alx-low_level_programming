#include "hash_tables.h"

/**
 * hash_table_print - This function prints a hash table
 *
 * @ht: Hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp = NULL;

	if (!ht)
		return;
	printf("{");
	for (; i < ht->size; i++)
	{
		if (ht->array[i] == NULL && !tmp)
			continue;
		if (!tmp)
			tmp = ht->array[i];
		printf("'%s': '%s'", tmp->key, tmp->value);

		tmp = tmp->next;
		while (!tmp && i < ht->size)
			tmp = ht->array[++i];
		if (tmp)
			printf(", ");
	}
	printf("}\n");
}
