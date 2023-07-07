#include "hash_tables.h"

/**
 * hash_table_print - print hey value pair
 * @ht: hash table pointer
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long index;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		tmp = ht->array[index];
		while (tmp)
		{
			printf("\'%s\': \'%s\', ", tmp->key, tmp->value);
			tmp = tmp->next;
		}
	}
	printf("}\n");
}


