#include "main.h"

#define CHAR_BITS 8 /*size of char*/
#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)

/**
 * get_bit - returns value of bit at given index
 * @n: integer parameter
 * @index: index parameter
 *
 * Return: -1 if error, bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bits;

	if (index > INT_BITS)
		return (-1);

	/* shift n to right by index & compare result with 1 */
	bits = ((n >> index) & 1);

	return (bits);
}
