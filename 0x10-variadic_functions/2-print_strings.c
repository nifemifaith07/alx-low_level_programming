#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a newline.
 * @separator: character that seperates the strings
 * @n: no of arguments
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *str;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (str)
			printf("%s", str);
		else
			printf("nil");

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
