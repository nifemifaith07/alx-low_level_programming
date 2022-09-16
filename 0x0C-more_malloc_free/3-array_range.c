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
	int index, l;
	int *ptr;

	if (min > max)
		return (NULL);
	l = max - min;

	ptr = malloc(sizeof(char) * (l + 1));
	if (!ptr)
		return (NULL);
	for (index = 0; index <= l; index++)
	{
		if (min <= max)
		{	
			ptr[index] = min;
			min += 1;
			index++;
		}
	}
	ptr[index] = '\0';

	return (ptr);
}
