#include "main.h"
int _is_divisible(int n, int div);

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: integer
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	div = 2;

	if (n < 2)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (_is-divisible(n, div);
}

/**
 * _is_divisible - check if number is dibisible
 * @n: number
 * @div: divisor
 *
 * Return: 0 or 1
 */

 int _is_divisible(int n, int div)
 {

	 if (n % 2 == 0)
		 return (0);

	 if (div = n / 2)
		 return (2);
	 return (_is-divisible(n, div + 1));
 }
