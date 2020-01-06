#include "monty.h"

/**
 * add - adds two elements of the stack
 * @stack: pointer to linked list in our stack structure
 * @line_number: line number
 * Return: sum of two elements
 */
void add(stack_t **stack, unsigned int line_number)
{
	int element1, element2, sum;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	element1 = (*stack)->n;
	element2 = (*stack)->next->n;
	sum = a + b;
	pop(stack, line_number);
	(*stack)->n = sum;
}