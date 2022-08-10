#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first int
 * @b: second int
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
 * op_sub - get difference of two integers
 * @a: first int
 * @b: second int
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
 * op_mul - multiplies two integers
 * @a: first int
 * @b: second int
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
 * op_div - get division of two integers
 * @a: first int
 * @b: second int
 * Return: result of division of a by b
 */

int op_div(int a, int b)
{
	return ((a) / (b));
}

/**
 * op_mod - get remainder of division of two integers
 * @a: first int
 * @b: second int
 * Return: remainder of division of a by b
 */

int op_mod(int a, int b)
{
	return ((a) % (b));
}
