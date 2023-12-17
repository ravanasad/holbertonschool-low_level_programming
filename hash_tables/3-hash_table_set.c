#include "hash_tables.h"

/**
 * hash_table_set - that adds an element to the hash table
 * @ht: the hash table you want to add or update
 * @key: key
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	int i, idx;
	char *val;

	val = strdup(value);
	if (!val)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val;
			return (1);
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
	{
		free(val);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(val);
		return (0);
	}
	node->value = val;
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
