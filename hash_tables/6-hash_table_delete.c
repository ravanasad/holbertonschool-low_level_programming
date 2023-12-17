#include "hash_tables.h"
/**
 * hash_table_delete - that deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *table = ht;
	hash_node_t *node, *tmp;
	unsigned long int idx = 0;

	if (!ht)
		return;
	while (ht->array[idx])
	{
		node = ht->array[idx];
		while (node)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
		idx++;
	}
	free(table->array);
	free(table);
}
