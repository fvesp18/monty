#include "monty.h"

/**
 * get_op_func - calls operator function
 * @s: type of operators
 * Return: NULL, on success
 */

void (*get_op_func(char **tokens, unsigned int line))(int, int)
{
	int i = 0;
	intruction_t ops[] = {
	{"push", op_push},
	{"pall", op_pall},
	{"pint", op_pint},
	{"pop", op_pop},
	{"swap", op_swap},
	{"add", op_add},
	{"nop", op_nop},
	{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if ((*ops[i].op == *s) && !(s + 1))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
