#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - function that selects corrects function
 * to performm the operation asked by the user
 * @s: input character passed as argument
 * Return: pointer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div}
	};
	int i = 0;

	while (i < 5)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
