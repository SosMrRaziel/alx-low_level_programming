#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i; /* Index for the array of the hash table */
	hash_node_t *node; /* Pointer to the node in the linked list */
	int flag = 0; /* Flag to indicate if a comma is needed */

	if (ht == NULL) /* Check if the hash table is NULL */
		return;

	printf("{"); /* Start of the hash table print */
	for (i = 0; i < ht->size; i++) /* Loop through the array of the hash table */
	{
		node = ht->array[i]; /* Get the node at the current index */
		while (node != NULL) /* Loop through the linked list at the current index */
		{
			if (flag == 1) /* If a comma is needed, print it */
				printf(", ");
			/* Print the key and value of the node */
			printf("'%s': '%s'", node->key, node->value);
			flag = 1; /* Set the flag to 1 for the next iteration */
			node = node->next; /* Move to the next node in the linked list */
		}
	}
	printf("}\n"); /* End of the hash table print */
}
