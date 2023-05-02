#include "lists.h"

/**
 * insert_nodeint_at_index - function insert node at a given index
 * @head: pointer to head
 * @idx: the index position
 * @n: the value to be inserte
 *
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t new_node;

	while (idx > 1 && *head != NULL)
	{
		*head = (*head)->next;
		idx--;
	}
	if (idx == 0)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	} else if (idx == 1)
	{
		new_node->next = (*head)->next;
		(*head)->next = new_node;
	} else if (*head == NULL)
		return (NULL);
	else
		return (new_node);
}
