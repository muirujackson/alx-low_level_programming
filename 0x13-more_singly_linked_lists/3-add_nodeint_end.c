#include "lists.h"

/**
 * add_nodeint_end - function add node at the end
 * @head: pointer to head
 * @n: number to be added
 *
 * Return:pointer to head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	tmp = *head;
	if (tmp == NULL)
	{
		*head = new;
		return (*head);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	return (*head);
}
