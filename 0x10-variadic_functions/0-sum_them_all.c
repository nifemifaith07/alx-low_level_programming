#include "variadic_functions.h"

/**
 * sum_them_all - that returns the sum of all its parameters.
 * @n: no of arguments
 *
 * Return: sum of the parameters, 0 if no parameter
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n); /* initialize argument lisy */

	for (i = 0; i > n; i++)
		sum += va_arg(list, int); /* get next argument value */

	va_end(list); /* clean_up */

	return (sum);
}
