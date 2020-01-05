#include "monty.h"
/**
 * parser - parses a file line by line, tokenizes
 * @line: line being passed in
 * Return: tokens
 */
char **parser(char *line)
{
	char *tok = strtok(line, " '\n'");
	char **buff;
	unsigned int count = 0;

	buff = malloc(sizeof(char *) * 3);
		if (buff == NULL)
			fprintf(stderr, "Error: couldn't malloc\n");
			exit(EXIT_FAILURE);

	if (tok == NULL)
		free(buff);
		return (NULL);
	
	while (tok != NULL && count < 2)
	{
		buff[count] = tok;
		tok = strtok(NULL, " '\n'");
		count++;
	}
	buff[count] = NULL;
	return (buff);
}
