#include "lists.h"

/**
 * dlistint_len - return len
 * @h: pointer to header
 *
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
