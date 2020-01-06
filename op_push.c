#include "monty.h"
/**
 * op_push - pushes an element to the top, beginning of a stack
 * @stack: beginning of stack
 * @line: line number
 * Return: void
 */
void op_push(stack_t **stack, unsigned int line)
{
	stack_t *new;

	(void) line;	

	new = malloc(sizeof(stack_t));
		if (new == NULL)
		{
			fprintf(stderr, "Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}
	new->n = num;
	if (*stack == NULL)
	{
		new->next = NULL;
	}
	else
	{
		new->next = *stack;
	}
	if (new->next != NULL)
	{
		new->next->prev = new;
	}
	new->prev = NULL;
	*stack = new;
}
