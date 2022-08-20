#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if BE, 1 if LE
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
