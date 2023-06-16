#include "lists.h"

/**
 * print_dlistint - function to print nmber of nodes
 * @h: Pointer to dlistint_h
 *
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
