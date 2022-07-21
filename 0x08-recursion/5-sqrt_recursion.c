#include "main.h"
int _pow_opt(int n, int j);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_opt(n, 2));
}

/**
 * _sqrt_opt - square root operator it finds square root of a number
 * @n: number
 * @j: test parameter
 *
 * Return: square root of n
 */

int _sqrt_opt(int n, int j)
{
	if (n < 0)
		return (-1);
	if ((j * j) > n)
		return (-1);
	if (j * j = n)
		return (j);
	if (n == 1)
		return (1);
	return (_sqrt_opt(n, j + 1));

}
