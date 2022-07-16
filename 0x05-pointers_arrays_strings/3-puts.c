#include "main.h"

/**
* _puts - prints a string followed by newline to stdout
* @str: string
* Return: nothing
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '/0')
	{
		_putchar(str[i]);
		i++;
	}
}
