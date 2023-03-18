#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, alpha = 'a';
	/* Print all lowercase letters */
	for (i = 0; i < 26; i++)
	{
		putchar(alpha + i);
	}
	/* Print all uppercase letters*/
	alpha = 'A';
	for (j = 0; j < 26; j++)
	{
		putchar(alpha + j);
	}
	putchar('\n');
	
	return (0);
}
