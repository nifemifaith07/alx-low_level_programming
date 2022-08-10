#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of int
 * @size: size of array of type int
 * @cmp: function pointer to the function to compare values
 *
 * Return: -1 if (null||size <= 0)|| return index of the first 
 * element for which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
