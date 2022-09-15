#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: pointer to first number
 * @n2: pointer to second number
 * @r: buffer where the result will be stored
 * @size_r: max size of the buffer
 * Return: a pointer to the result or
 * 	0 if the result can't be stored in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, len = 0, k, a, b, abs = 0;
	/* calc lenght of d numbers, save len as higher value */
	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > j)
		len = i;
	else
		len = j;
	/* check len !> size, +1 cos len was counted from 0 */
	if ((len + 1) > size_r)
		return (0);
	r[len] = '\0';
	/* save integer values of n1, n2 in a, b, calc their sum */
	for (k = len - 1; k >= 0; k--)
	{
		i--;
		j--;
		if (i >= 0)
			a = n1[i] - '0';
		else
			a = 0;
		if (j >= 0)
			b = n2[j] - '0';
		else
			b = 0;
	/* abs is d remainder to take over to next place value */
		r[k] = (a + b + abs) % 10 + '0';
		abs = (a + b + abs) / 10;
	}
	/* extra value to store */
	if (abs == 1)
	{
		/* increase len & check that len !> size */
		r[len + 1] = '\0';
		if ((len + 2) > size_r)
			return (0);
		/* move values backwards by 1 */
		while (len-- >= 0)
			r[len + 1] = r[len];
		r[0] = abs + '0';
	}
	return (r);
}
