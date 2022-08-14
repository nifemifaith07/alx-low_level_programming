#include <stdio.h>

/**
 * premain - function that runs before main
 *
 * Return: nothing
 * Description: Apply the constructor attribute to premain()
 * so that it is executed before main()
 */

void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
