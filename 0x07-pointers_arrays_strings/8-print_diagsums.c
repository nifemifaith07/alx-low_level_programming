#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sum of diagonal elements
 * @a: array of integers[2D]
 * @size: array size and = size *size
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int n, sum1 = 0, sum2 = 0;

	for (n = 0; n < size; n++)
	{
		sum1 +=  a[n];
		sum2 += a[size - n - 1];
	}
	printf("%d", sum1);
	printf("%d", sum2);
}
