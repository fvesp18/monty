#include "monty.h"

/**
 * swap - swaps two elements of our stack
 * @stack: pointer to linked list in our stack structure
 * @line_number: line number
 * Return: void
 */
void op_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *TempPointer;

	if (*stack == NULL)
	{
        printf("L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
    }	

	TempPointer = (*stack)->next;
	(*stack)->prev = TempPointer;
	(*stack)->next = TempPointer->next;


	TempPointer->prev = NULL;
	TempPointer->next = *stack;
	
    *stack = TempPointer;
}
