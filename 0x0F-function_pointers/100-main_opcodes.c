#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the opcodes of its own main function.
 *	Usage: ./main number_of_byte
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int nbytes, index;
	unsigned char opcodes;
	int (*add)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < nbytes; index++)
	{
		opcodes = *(unsigned char *)add;
		printf("%.2x", opcodes);

		if (index == nbytes - 1)
			continue;
		printf(" ");

		add++;
	}
	printf("\n");

	return (0);
}
