#include "hash_tables.h"

/**
 * hash_table_print - This function prints a hash table
 *
 * @ht: Hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp = NULL;
	int printed = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (printed)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			printed = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
