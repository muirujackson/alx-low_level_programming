#include "lists.h"

/**
 * free_listint - function to free the memory
 * @head: pointer to head
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
