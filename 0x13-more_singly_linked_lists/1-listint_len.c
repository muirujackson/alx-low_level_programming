#include "lists.h"

/**
 * listint_len - count number of element
 * @h: pointer to head
 *
 * Return: lenght of list
 */
size_t listint_len(const listint_t *h)
{
	size_t length;

	length = 0;
	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}	
