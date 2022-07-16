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
	int i, k = 0;

	for (i = (n - 1); ; i--)
	{
		a[k] = a[i];
		k++;
	}
}
