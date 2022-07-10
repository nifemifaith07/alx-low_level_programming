#include "main.h"

/**
* print_line - prints a line
* @n: no of lines
*
* Return: nothing
*/

void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar(95);

		c++;
	}
	_putchar(10);
}
