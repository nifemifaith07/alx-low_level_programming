#include "main.h"

#define CHAR_BITS 8 /*size of char*/
#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)

/**
 * set_bit - sets value of bit at index to 1
 * @n: pointer to integer value to modify
 * @index: index parameter
 *
 * Return: 1 if it worked, -1 if error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int post = 1;

	if (index > INT_BITS)
		return (-1);

	post <<= index; /* shift post to the left by index */

	*n = (*n | post);

	return (1);
}
