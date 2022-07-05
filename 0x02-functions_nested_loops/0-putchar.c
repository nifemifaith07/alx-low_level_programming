#include "main.h"

/**
 * main - Entry point
 * A program that prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char nife[] = "_putchar";
	int j = 0;

	while (j < 8)
	{
		_putchar(nife[j]);
		j++;
	}
	_putchar('\n');
	return (0);
}
