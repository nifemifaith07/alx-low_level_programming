#include  "main.h"

/**
 * print_triangle - prints a triangle 
 * @size: number of rows of triangle
 *
 * Return: Nothing
 */

void print_triangle(int size)
{
	int a, c, d;

	if (size > 0)/* check size */
	{
		for (a = 1; a <= size; a++)/* loop for rows(size_times) */
		{
			for (c = 1; c <= (size - a); c++)/* loop for spaces */
			{
				_putchar(' ');
			}

			for (d = 1; d <= a; d++)/* loop for # */
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar(10);
}
