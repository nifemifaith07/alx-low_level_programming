#include "3-calc.h"

/**
 * get_op_func - selects the correct function to
 * perform the operation asked by the user
 * @s: character(operator) argument
 *
 * Return: a pointer to the function that corresponds
 * to the operator received
 * Description: function that recieves a char and
 *	returns an int pointer to a function that recieves
 *	two int parameter[int (*)(int, int)]
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;
/* iterate till *s == *(ops[i].op) */
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
