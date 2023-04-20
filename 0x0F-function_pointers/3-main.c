#include "3-calc.h"
#include <stdio.h>
#include <string.h> /*for atoi*/
#include <stdlib.h> /*for exit*/

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	/*Declaring variables*/
	int firstNum, secondNum;
	char *operator;

	operator = argv[2];
	secondNum = atoi(argv[3]);
	firstNum = atoi(argv[1]);
	if (argc == 4)
	{
		int (*p)(int, int);

		p = get_op_func(operator);
		if (p == NULL || operator[1] != '\0')
		{
			printf("Error\n");
			exit(99);
		}
		if ((*operator == '/' && !secondNum) || (*operator == '%' && !secondNum))
		{
			printf("Error\n");
			exit(100);
		}


		printf("%d\n", get_op_func(operator)(firstNum, secondNum));
		return (0);
	}
	printf("Error\n");
	exit(98);
}
