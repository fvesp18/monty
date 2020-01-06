#include "monty.h"
/**
 * get_op_func - calls operator function
 * @toks: type of operators
 * @line: line being processed
 * Return: NULL, on success
 */
void (*get_op_func(char **toks, unsigned int line))(stack_t **, unsigned int)
{
	unsigned int count;

	instruction_t ops[] = {
	{"push", op_push},
	{"pall", op_pall},
	{"pint", op_pint},
	{"pop", op_pop},
/*	{"swap", op_swap},*/
/*	{"add", op_add},*/
	{"nop", op_nop},
	{NULL, NULL}
	};

	if (toks[0][0] == '#')
	{
		free(toks);
		return(op_nop);
	}
	count = 0;
	while (ops[count].opcode != NULL)
	{
		if ((strcmp(ops[count].opcode, toks[0]) == 0))
		{
			if ((strcmp(ops[count].opcode, "push") == 0) && toks[1] == NULL)
			{
				free(toks);
				fprintf(stderr, "L%d: usage: push integer\n", line);
				exit(EXIT_FAILURE);
			}
			else if ((strcmp(ops[count].opcode, "push") == 0))
				num = atoi(toks[1]);
			free(toks);
			return (ops[count].f);
		}
		count++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line, toks[0]);
	free(toks);
	exit(EXIT_FAILURE);
}
