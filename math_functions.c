#include "monty.h"

/**
 * op_add - adds two elements of the stack
 * @stack: pointer to linked list in our stack structure
 * @line_number: line number
 * Return: sum of two elements
 */
void op_add(stack_t **stack, unsigned int line_number)
{
	int element1, element2, sum;
	stack_t *new;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	new = *stack;
	element1 = new->n;
	element2 = new->next->n;
	sum = element2 + element1;
	new->next->n = sum;
	*stack = new->next;
	(*stack)->prev = NULL;
	free(new);
}
