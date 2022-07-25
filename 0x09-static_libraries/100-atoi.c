#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string
 *
 * Return: the integer(with sign if -ve)
 */
int _atoi(char *s)
{
	unsigned int result = 0;
	int sign = 1;

	do {

		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			result = (result * 10) + (*s - '0');

		else if (result > 0)
			break;

	} while (*s++);

	return (result * sign);
}
