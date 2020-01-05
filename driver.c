#include "monty.h"
/**
 * drive - driver code for monty interpreter
 * @argc: argument count
 * @argv: array of args
 * Return: int
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	parser();
	return (EXIT_SUCCESS);
}
