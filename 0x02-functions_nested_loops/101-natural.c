#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: Print the sum of all multiples of 3 or 5 below 1024.
 * Return: 0
 */

int main(void)
{
	int i = 1;
	int total = 0;

	while (i < 1024)
	{
		if (i % 3 == 0) /** If i is a multiple of 3 **/
			total += i;
		else if (i % 5 == 0) /** If i is a multiple of 5 **/
			total += i;

		i++;
	}
	printf("%d\n", total);
	return (0);
}
