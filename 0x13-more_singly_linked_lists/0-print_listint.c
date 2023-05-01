#include "lists.h"

/**
 * print_listint - function print values in the node
 * @h: pointer to heade
 *
 * Return: total number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t totalNodes;

	totalNodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		totalNodes++;
		h = h->next;
	}
	return (totalNodes);
}
