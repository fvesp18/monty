#include "monty.h"
/**
 * op_add - adds two elements of the stack
 * @stack: pointer to linked list in our stack structure
 * @line_number: line number
 */
void op_add(stack_t **stack, unsigned int line_number)
{
	int element1, element2, sum;
	stack_t *new;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
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
/**
 * op_sub - subtracts top two elements
 * @stack: stack
 * @line: line
 */
void op_sub(stack_t **stack, unsigned int line_number)
{
	int element1, element2, sub;
	stack_t *new;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	new = *stack;
	element1 = new->n;
	element2 = new->next->n;
	sub = element2 - element1;
	new->next->n = sub;
	*stack = new->next;
	(*stack)->prev = NULL;
	free(new);
}
