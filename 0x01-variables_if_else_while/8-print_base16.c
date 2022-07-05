#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char alpha;
	int num;

	for (num = 0; num <= 9; num++)
		putchar('0' + num);

	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);

	putchar ('\n');
	return (0);
}
