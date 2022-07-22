#include "main.h"

/**
 * main - prints all arguments it recieves, including the first
 * ome argument per line, ending with a newline
 * @argc: argument vount
 * @argv: array of pointers to command line argument
 *
 * Result: Always 0(success)
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);


}
