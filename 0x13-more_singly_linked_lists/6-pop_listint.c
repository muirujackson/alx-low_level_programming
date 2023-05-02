#include "lists.h"

/**
 * pop_listint - function delete the head node
 * @head: a pointer to head
 *
 * Return: int number removed
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (*head == NULL)
		return (0);
	tmp = *head;
	num = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (num);
}
