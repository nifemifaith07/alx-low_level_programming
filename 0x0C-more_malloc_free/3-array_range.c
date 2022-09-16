#include "main.h"

/**
 * array_range - creates an array of integers, contains all the values from 
 *	min(included) to max (included),ordered from min to max
 * @min: lowest integer to start from
 * @max: highest value indicating endpoint
 *
 * Return: pointer to new array, Null if malloc fails or min > max
 */

int *array_range(int min, int max)
{
	int index = 0, l;
	int *ptr;

	if (min > max)
		return (NULL);
	l = max - min + 1;

	ptr = malloc(sizeof(int) * l);
	if (!ptr)
		return (NULL);
	for (index = 0; index < l; index++)
	{	
		ptr[index] = min;
		min++;			
	}
	ptr[index] = '\0';

	return (ptr);
}
