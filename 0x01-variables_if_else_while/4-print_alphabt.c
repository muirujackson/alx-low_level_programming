#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, alpha = 'a';

	for ( ; i < 26; )
	{
		if (alpha + i != 'q' && alpha + i != 'e')
			putchar(alpha + i);
		i++;
	}
	putchar('\n');

	return (0);

}
