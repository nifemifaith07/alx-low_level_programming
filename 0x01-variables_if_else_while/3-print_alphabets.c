#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alpha;
	char ALPHA;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (ALPHA = 'A'; ALPHA <= 'Z'; ALPHA++)
	{
		putchar(ALPHA);
	}
	return (0);
}
