#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: The array
 * @n: number of elements in the array
 *
 * Return: Nothing
*/

void reverse_array(int *a, int n)
{
	int i, temp, h;

	i = 0;
	h = n - 1;
	/**
	 * set value in array a in temp
	 * then place the last array in
	 * the first array then place
	 * value in temp to last array
	*/
	while (i < h)
	{
		temp = a[i];
		a[i] = a[h];
		a[h] = temp;
		i++;
		h--;
	}
}
