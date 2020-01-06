#include "monty.h"
/**
 * op_pint - prints int at nth element of nodes
 * @stack: stack
 * @line: line
 */
void op_pint(stack_t **stack, unsigned int line)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
