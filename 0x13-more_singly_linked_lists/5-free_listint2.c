#include "lists.h"

/**
 * free_listint2 - function that frees nodes
 * @head: a pointer to head
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL)
		return;
	while ((tmp = *head) != NULL)
	{
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
