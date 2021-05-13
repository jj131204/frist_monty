#include "monty.h"

/**
 * main - principal function(monty interpreter)
 *
 *@ac: the number of arguments
 *
 *@av: the arguments
 *
 *Return: 0
 */

int main(int ac, char *av[])
{
	stack_t *stack = NULL;
	FILE *open;
	char *line = NULL, *tokens = NULL;
	size_t bufsize = 0;
	unsigned int lines = 0;

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	open = fopen(av[1], "r");
	if (open == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&line, &bufsize, open) != EOF)
	{
		lines++;
		tokens =  strtok(line, DELIMITERS);
		if (tokens != NULL  && tokens[0] != '#')
			_opcode(tokens, &stack, lines);
	}

	free(line);
	fclose(open);
	free_stack(stack);
	return (0);
}
