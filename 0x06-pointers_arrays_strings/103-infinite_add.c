#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: pointer to first number
 * @n2: pointer to second number
 * @r: buffer where the result will be stored
 * @size_r: max size of the buffer
 * Return: a pointer to the result or
 *	0 if the result can't be stored in r
 * << means leftshift or move to the left
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, len = 0, k, a, b, abs = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > j)
		len = i;
	else
		len = j;
	if ((len + 1) > size_r) /* +1 cos len was counted from 0 */
		return (0);
	r[len] = '\0';
	for (k = len - 1; k >= 0; k--)
	{
		i--;
		j--;
		if (i >= 0)
			a = n1[i] - '0'; /* store int of n1 in a */
		else
			a = 0;
		if (j >= 0)
			b = n2[j] - '0'; /* int of n2 in b */
		else
			b = 0;
		r[k] = (a + b + abs) % 10 + '0';
		abs = (a + b + abs) / 10; /* remainder to << */
	}
	if (abs == 1)
	{
		r[len + 1] = '\0'; /* increase len */
		if ((len + 2) > size_r)
			return (0);
		while (len-- >= 0) /* move vaues backwards by 1 */
			r[len + 1] = r[len];
		r[0] = abs + '0';
	}
	return (r);
}
