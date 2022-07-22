#include "main.h"

/**
 * main - multiplies two numbers followed by newline or
 *nprint Error if prigram does not recieve teo arguments
 * @argc: argument count
 * @argv: array of pointers
 *
 * Return: 0(success) or 1 if not two arguments
 */

int main(int argc, char * argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
