#include "main.h"

/**
 * _Atoi - converts chars to binary integers
 * @str: pointer to string containing the chars
 *
 * Return: equivalent binary integer or
 * 	0 if non binary digit is found
 */
 
unsigned int _Atoi(const char *str)
{
	unsigned int res = 0;
	int i = 0;
	unsigned int num;

	for (; str[i] != '\0'; ++i)
		res = res * 10 + str[i] - '0';
	/* test if res contains only binary digits */
	num = res;
	while (num)
	{
		if (num % 10 > 1) /* if non binary found return 0 */
			return (0);

		num = num / 10;
	}

	return (res);
}

/**
 * binary_to_uint - converts binary chars to unsigned decimal
 * @b: pointer to binary chars
 *
 * Return: 0 if b is Null or contains non binary digits
 * 	or number converted 
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	unsigned int last, num;
	unsigned int base = 1;


	if (b == NULL)
		return (0);

	num = _Atoi(b);
	if (num = 0)
		return (0):
	while (num)
	{
		last = num % 10;
		num = num / 10;

		dec += last * base;
		base = base * 2;
	}

	return (dec);
}
