#include <stdio.h>

/**
* main - Entry point
* Program that prints all possible different combinations of three digits
* must be separated by , followed by a space
* The three digits must be different
* 012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			for (k = 2; k <= 9; k++)
			{
				if (i < j && j < k)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);

					if (!(i == 7 && j == 8 && k == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
