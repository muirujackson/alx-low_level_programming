#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of linked list
 * @head: pointer to head
 * @index: the index used to locate the node
 *
 * Return: Node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node_at_index;

	if (head == NULL)
		return (NULL);
	while (index != 0 && head != NULL)
	{
		head = head->next;
		index--;
	}

	if (index > 0)
		return (NULL);
	node_at_index = head;
	return (node_at_index);
}
