#include "main.h"

#define CHAR_BITS 8 /*size of char*/
#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)

/**
 * clear_bit - sets value of a bit to 0 at a given index.
 * @n: integer parameer
 * @index: index parameter
 *
 * Return: 1 if success, -1 if error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int post = 1;

	if (index > INT_BITS)
		return (-1);

	post = post << index;

	*n = (*n ^ post);

	return (1);
}
