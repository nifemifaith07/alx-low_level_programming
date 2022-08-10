#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on an array
 * @array: array of int
 * @size: size of type size_t of array
 * @action: pointer to function to be executed
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (array == NULL || size <= 0 || action == NULL)
		return;

	for (j = 0; j < size; j++)
		action(array[j]);
}
