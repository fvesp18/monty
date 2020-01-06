#include "monty.h"
/**
 * op_pop - removes head of stack
 * @stack: stack
 * @line: line
 */
void op_pop(stack_t **stack, unsigned int line)
{
	stack_t *buff;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line);
		exit(EXIT_FAILURE);
	}
	buff = *stack;
	*stack = buff->next;
	if (buff->next)
	{
		buff->next->prev = NULL;
	}
	free(buff);
}
