#include <stdio.h>

/**
 * main - print the name of program
 * @argc: count of all argument
 * @argv: an array containing all argument
 *
 * return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
