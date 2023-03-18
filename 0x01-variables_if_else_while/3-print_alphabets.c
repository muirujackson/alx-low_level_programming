#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int alpha = 'a';
        /* Print all lowercase letters */
        for (int i = 0; i < 26; i++)
        {
                putchar(alpha + i);
        }
        /* Print all uppercase letters*/
        alpha = 'A';
        for (int i = 0; i < 26; i++)
        {
                putchar(alpha + i);
        }
        putchar('\n');

        return 0;
}
