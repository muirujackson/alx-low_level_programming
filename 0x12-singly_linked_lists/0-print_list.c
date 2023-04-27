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
	list_t *p;

	n = 0;
	p = h;
	while (p != NULL)
	{
		if(p->str != NULL)
			prinf("[%lu] %s\n", p->len, p-str);
		else
			prinf("[0] (nil)");
		p = p->next
	}
}
