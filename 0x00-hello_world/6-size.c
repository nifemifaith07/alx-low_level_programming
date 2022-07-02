#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int d;
	long long int e;
	float f;

	printf("Size of a char: %u byte(s)\n", (char)sizeof(c));
	printf("Size of an int: %u byte(s)\n", (int)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (long int)sizeof(d));
	printf("Size of a long long int: %lu byte(s)\n", (int)sizeof(e));
	printf("Size of a float: %lu byte(s)\n", (int)sizeof(f));
	return (0);
}
