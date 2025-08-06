#include "3-calc.h"
#include <stddef.h>
#include <string.h>

/**
 * get_op_func - selects the correct function to perform the operation asked
 * @s: the operation wanted
 *
 * Return: a pointer to the function that corresponds to the operator given
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{op_add, "+"},
		{op_sub, "-"},
		{op_mul, "*"},
		{op_div, "/"},
		{op_mod, "%"},
		{NULL, NULL}
	};

	while (i < 6)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (ops[i].f);
}
