#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: The array
 * @n: number of elements of the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int k, i = 0;

	while (a[i] != '\0')
		i++;

	for (k = 0; k < n; k++)
	{
		a[k] = a[i];
		i--;
	}
}
