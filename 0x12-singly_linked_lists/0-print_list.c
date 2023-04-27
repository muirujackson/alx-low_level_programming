#include "lists.h"

/**
 * print_list - function that prints the values
 * @h: the head
 *
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t n;
	const list_t *p;

	n = 0;
	p = h;
	while (p != NULL)
	{
		if(p->str != NULL)
		{
			printf("[%u] %s\n", p->len, p->str);
			n++;
		}else
		{
			n++;
			printf("[0] (nil)\n");
		}
		p = p->next;
	}
	return (n);
}
