#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 *
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	return (_pow_opt(n, 2));
}

int _pow_opt(int n, int j)
{
	if (n < 0)
		return (-1);
	if ((j * j) > n)
		return (-1);
	if (j * j = n)
		return (j);
	if (n == 1)
		return (1);
	return (_pow_opt(n, j + 1));

}
