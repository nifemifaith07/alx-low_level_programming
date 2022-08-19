#include "main.h"
#include <stdio.h>


unsigned int myAtoi(const char *str)
{
	unsigned int res = 0;
	int i = 0;

	for (; str[i] != '\0'; ++i)

		res = res * 10 + str[i] - '0';

	return (res);
}
int main(void)
{

	char str[] = "100101";

	unsigned int val = myAtoi(str);

	printf("%d ", val);

	return 0;
} 

/* unsigned int binary_to_uint(const char *b) */
