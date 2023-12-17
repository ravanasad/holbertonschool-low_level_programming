#include "hash_tables.h"
#include <stdbool.h>
/**
 * hash_table_print - that prints a hash table
 * @table: the hash table
 */
void hash_table_print(const hash_table_t *table)
{
	unsigned long int i = 0;
	bool check = false;
	hash_node_t *node;

	if (!table)
		return;
	printf("{");
	for (; i < table->size; i++)
	{
		if (table->array[i] == NULL)
			continue;
		if (check)
			printf(", ");
		node = table->array[i];
		while (node)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			if (node)
				printf(", ");
		}
		check = true;
	}
	printf("}\n");
}
