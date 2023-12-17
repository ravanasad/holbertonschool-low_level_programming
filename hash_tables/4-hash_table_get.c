#include "hash_tables.h"

/**
 * hash_table_get - that retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: key
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int idx = key_index((const unsigned char *)key, ht->size);
	hash_node_t *node;

	if (!ht)
		return (NULL);

	if (idx > ht->size)
		return (NULL);
	node = ht->array[idx];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
