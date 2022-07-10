#include  "main.h"

/**
 * print_square - prints square using #
 * @size: size of the square
 *
 * Return: nothing
 */

void print_square(int size)
{
	int c;

	if (size <= 0)
		_putchar('\n');
	else if (size > 0)
	{
		for (c = 0; c < size; c++)
		{
			while (size > 0)
			{
				_putchar(35);
				size--;
			}
			_putchar(10);
		}
	}
}
