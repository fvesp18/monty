#include "monty.h"
/**
 * op_pall - prints all elements of a list
 * @stack: stack
 * @line: line
 * Return: nth element
 */
void op_pall(stack_t **stack, unsigned int line)
{
	stack_t *new;

	(void) line;
	new = *stack;
	while (new != NULL)
	{
		if (new->n)
		{
			printf("%d\n", new->n);
		}
		new = new->next;
	}
}
