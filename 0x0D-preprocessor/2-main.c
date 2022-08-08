#include <stdio.h>

/**
 * main - entry point
 * prints the file name it was compiled from
 *
 * Return: 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
