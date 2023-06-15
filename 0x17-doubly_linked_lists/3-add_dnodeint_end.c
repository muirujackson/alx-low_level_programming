#include "lists.h"

/**
 * add_dnodeint_end - function add node at the end
 * head: pointer to head
 * n: nodes number
 *
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *lastnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		dprintf(2, "malloc failled\n");
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}

	lastnode = *head;

	while (lastnode->next != NULL)
	{
		lastnode = lastnode->next;
	}
	lastnode->next = newnode;
	newnode->prev = lastnode;
	return (newnode);
}
