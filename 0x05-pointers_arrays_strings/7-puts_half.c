#include "main.h"

/**
 * puts_half - prints half the string or half (=(lenght-1) 2)) bytes
 * of string if string lenght is odd, followed by newline
 * @str: string parameter
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int mid, len, i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		mid = len / 2;
		for (i = mid; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		mid = (len - 1) / 2;
		for (i = mid + 1; i < len; i++)
			_putchar(str[i]);
	}
	_putchar ('\n');
}
