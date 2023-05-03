#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes node at index
 * @head: pointer to head
 * @index: the index to delete node
 *
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *leftNode;

	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (index != 0 && tmp != NULL)
	{
		if (index == 1)
			leftNode = tmp;
		index--;
		tmp = tmp->next;
	}
	if (index > 0)
		return (-1);
	leftNode->next = tmp->next;
	free(tmp);
	return (1);
}


