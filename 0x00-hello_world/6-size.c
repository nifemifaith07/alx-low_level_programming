#include <stdio.h>

/**
 *  * main - Entry Point
 *   *
 *    * Return: Always 0 (Success)
 *     */
int main(void)
{
		char c;
			int i;
				long int d;
					long long int e;
						float f;

							printf("Size of a char: %lu byte(s)\n", (unsigned char)sizeof(c));
								printf("Size of an int: %lu byte(s)\n", (unsigned int)sizeof(i));
									printf("Size of a long int: %lu byte(s)\n", (unsigned long int)sizeof(d));
										printf("Size of a long long int: %lu byte(s)\n", (unsigned int)sizeof(e));
											printf("Size of a float: %lu byte(s)\n", (unsigned int)sizeof(f));
												return (0);
}
