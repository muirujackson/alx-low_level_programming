#include "lists.h"

/**
 * sum_listint - function that return the sum
 * @head: pointer to head node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
