#include "lists.h"

/**
 * add_nodeint - function add a node at the head
 * @n: value to be added in the new node
 * @head: pointer to head
 *
 * Return: pointer to head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
