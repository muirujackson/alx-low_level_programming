#include "main.h"

/**
 * add_node - function to add node
 * @head: pointer to a pointer
 * @str: string to be saved
 *
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t new_node;
	int string_len;

	string_len = 0;
	new_node =  malloc(sizeof(list_t));

	while (str[string_len] != '\0')
		string_len++;
	new_node->str = strdup(*str);
	new_node->len = (string_len - 1);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}


