#include  "main.h "

/**
 * print_diagonal - draws diagonal line on the terminal
 * @n: umber of times the chacternshould be printed
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int c, d;

	c = 0;

	while (n > 0)
	{
		d = c;
		while(d	> 0)
		{
			_putchar(32);
			d--;
		}
		_putchar(95);
		_putchar('\n');
		c++;
		n--;
	}
	if (c < 1)
		_putchar(10);
}
