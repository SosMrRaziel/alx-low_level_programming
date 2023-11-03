#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer
 * @key: key
 * Return: value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	/* Check if the hash table or the key is NULL */
	if (ht == NULL || key == NULL)
		return (NULL);

	/* Compute the index of the key using a hash function */
	index = key_index((const unsigned char *)key, ht->size);
	/* Get the node at that index in the hash table array */
	node = ht->array[index];

	/* Traverse the linked list at that index until */
	/* the key is found or the end is reached */

	while (node != NULL)
	{
		/* Compare the node's key with the given key */
		if (strcmp(node->key, key) == 0)
			/* Return the node's value if they match */
			return (node->value);
		/* Move to the next node in the list */
		node = node->next;
	}
	/* Return NULL if the key was not found */
	return (NULL);
}
