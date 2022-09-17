#include "main.h"
#include <stdlib.h>

int is_digit(char *av[]);
/**
 * is_digit - check if arguments are digits
 * @av: array of arguments
 * Return: 0 if digits, 1 if not digits
 */

int is_digit(char *av[])
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] < 0 || av[i][j] > 9)
				return (1);
		}
	}
	return (0);
}

/**
 * _memset - initialize memory to zero
 * @str: string to initialize
 * @l: lenght of string
 */
void _memset(char *str, int l)
{
	int i;

	for (i = 0; i < l; i++)
		str[i] = '0';
	str[i] = '\0';
}

/**
 * mul - multiplies a char with a string and places the answer into dest
 * @c: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: highest index to start addition
 *
 * Return: pointer to dest, or NULL on failure
 */
char *mul(char c, char *str, int str_len, char *dest, int dest_len)
{
	int p, q, mul, mulrem = 0, add, addrem = 0;

	for (p = str_len, q = dest_len; p >= 0; p--, q--)
	{
		mul = (c - '0') * (str[j] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[q] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[q] = add % 10 + '0';
	}
	for (addrem += mulrem; q >= 0 && addrem; q--)
	{
		add = (dest[q] - '0') + addrem;
		addrem = add / 10;
		dest[q] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * _print - moves a string one place to the left and prints the string
 * @str: string to move
 * @l: size of string
 *
 * Return: void
 */
void _print(char *str, int l)
{
	int i, j;

	i = j = 0;
	while (i < l)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == l - 1)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
	free(str);
}

/**
 * main - entry point
 * @argc: arguument count
 * @argv: argument vector
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int n1, n2, len, x, b;
	char *ptr, *temp;
	char er[] = "Error\n";

	if (argc != 3 || is_digit(argv))
	{
		for (x = 0; er[x]; x++)
			_putchar(er[x]);
		exit(98);
	}

	for (n1 = 0; argv[1][n1]; n1++)
		;
	for (n2 = 0; argv[2][n2]; n2++)
		;
	len = n1 + n2 + 1;
	a = malloc(sizeof(char) * len);
	if (a == NULL)
	{
		for (x = 0; er[x]; x++)
			_putchar(er[x]);
		exit(98);
	}

	_memset(a, len - 1);
	for (y = n2 - 1, b = 0; y >= 0; y--, b++)
	{
		temp = mul(argv[2][y], argv[1], n1 - 1, a, (len - 2) - i);
		if (temp == NULL)
		{
			for (x = 0; er[x]; x++)
				_putchar(er[x]);
			free(a);
			exit(98);
		}
	}
	_print(a, len - 1);
	return (0);
}
