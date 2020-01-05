#include "monty.h"
/**
 * free_list - frees the stack
 * @stack: thing to be freed
 */
void free_list(stack_t **stack)
{
	stack_t *check;

	if (*stack == NULL)
		return;

	while (*stack != NULL)
	{
		check = (*stack)->next;
		free(*stack);
		if (check == NULL)
			return;
		check->prev = NULL;
		*stack = check;
	}
	free(*stack);
}
