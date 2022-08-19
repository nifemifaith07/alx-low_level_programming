#include "main.h"

unsigned int _Atoi(const char *str)
{
	unsigned int res = 0;
	int i = 0;

	for (; str[i] != '\0'; ++i)

		res = res * 10 + str[i] - '0';

	return (res);
}

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	unsigned int last, num;
	unsigned int base = 1;


	if (b == NULL)
		return (0);

	num = _Atoi(b);

	while (num)
	{
		last = num % 10;
		if (last == 0 || 1)
		{
			num = num / 10;

			dec += last * base;
			base = base * 2;
		}
		else
			return (0);
	}

	return (dec);
}
