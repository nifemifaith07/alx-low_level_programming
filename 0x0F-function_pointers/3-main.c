#include "3-calc.h"

/**
 * main - prints result of simple calculation
 * @argv: array of pointers to arguments
 * @argc: argument count
 
 *
 * Return: always (0)
 * Description: Program that takes 4 arguments where 2 are
 *              int variables plus an operator to perform
 *              a function between the two numbers
 *
 *              Usage: ./calc num1 operator num2
 *                         |     |       |     |_ argv[3]
 *                         |     |       |_ argv[2]
 *                         |     |_ argv[1]
 *                         |_ argv[0]
 *
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2
		char *op

		if (argc != 4)
		{
			printf("Error\n");
			exit(98);
		}

	/*if argument is string convert to number*/
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '/0')
	{
		printf("Error\n");
		exit(99);
	}

	/* Error if user tries to divide '/'(47) or '%'(37) by 0*/
	if ((*op == 47 || *op == 37) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
