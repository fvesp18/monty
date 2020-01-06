#include "monty.h"
/**
 * main - driver code for monty interpreter
 * @argc: argument count
 * @argv: array of args
 * Return: int
 */
int main(int argc, char **argv)
{
	char *file;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = argv[1];
	reader(file);
	return (EXIT_SUCCESS);
}
