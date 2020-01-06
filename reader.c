#include "monty.h"
/**
 * reader - reads a file line by line
 * @file: file to be read
 */
void reader(char *file)
{
	FILE *fn;
	stack_t *stack = NULL;
	size_t size = 0;
	unsigned int line = 0;
	char **toks, *tok = NULL;

	fn = fopen(file, "r");
	while (-1 != getline(&tok, &size, fn))
	{
		line += 1;
		toks = parser(tok);
		get_op_func(toks, line)(&stack, line);
	}
	fclose(fn);
	free(tok);
	free_list(&stack);
}
