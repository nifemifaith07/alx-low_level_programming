#include "main.h"

/**
 * main - prints no of arguments passed into it
 * followed by a newlime
 * @argc: argument count
 * @argv: array of pointers to command-lime argumemts
 *
 * Return: Always 0(success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
