#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i; /* Index for the array of the hash table */
	hash_node_t *node, *tmp; /* Pointers to the nodes in the linked list */

	if (ht == NULL) /* Check if the hash table is NULL */
		return;

	for (i = 0; i < ht->size; i++) /* Loop through the array of the hash table */
	{
		node = ht->array[i]; /* Get the node at the current index */
		while (node != NULL) /* Loop through the linked list at the current index */
		{
			tmp = node->next; /* Save the next node in a temporary variable */
			free(node->key); /* Free the key of the node */
			free(node->value); /* Free the value of the node */
			free(node); /* Free the node */
			node = tmp; /* Move to the next node in the linked list */
		}
	}
	free(ht->array); /* Free the array of the hash table */
	free(ht); /* Free the hash table */
}
