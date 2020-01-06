#include "monty.h"
/**
 * op_pall - prints all elements of a list
 * @stack: stack
 * @line: line
 * Return: nth element
 */
void op_pall(stack_t **stack, unsigned int line)
{
	(void) line;
	while (*stack != NULL)
	{
		if ((*stack)->n)
		{
			printf("%d\n", (*stack)->n);
		}
		(*stack) = (*stack)->next;
	}
}
