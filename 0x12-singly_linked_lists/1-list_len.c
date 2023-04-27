#include "lists.h"

/**
 * list_len - this function the number of nodes
 * @h: a pointer to the header
 *
 * Return: total  number of nodes
 */
size_t list_len(const list_t *h)
{
	const list_t *pointer;
	size_t total_nodes;

	pointer = h;
	total_nodes = 0;

	/*keep looping until pointer points to null*/
	while (pointer != NULL)
	{
		total_nodes++;
		pointer = pointer->next;
	}
	return (total_nodes);
}
