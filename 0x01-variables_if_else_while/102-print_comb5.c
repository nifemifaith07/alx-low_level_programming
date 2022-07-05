#include <stdio.h>

/**
 * main - Entry point
 * program that prints all possible combinations
 * of two two-digit numbers.
 * The numbers should range from 0 to 99
 * he two numbers should be separated by a space
 * All numbers should be printed with two digits
 * The combination of numbers must be separated
 * by comma, followed by a space
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 1; j <= 99; j++)
		{
			if (j > i)
			{
				putchar(((i / 10)) + '0');
				putchar(((i % 10)) + '0');
				putchar(' ');
				putchar(((j / 10)) + '0');
				putchar(((j % 10)) + '0');

				if (!(i == 98 && j == 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
