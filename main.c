#include "monty.h"

int main (int ac, char *av[])
{
	FILE *open;
	int get = NULL;
	char *line = NULL;
	size_t bufsize = 0;
	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	open = fopen(av[1], "r");
	if (!open)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		return (EXIT_FAILURE);
	}
	while(getline(&line, &bufsize, open) != EOF)
	{
		
	}
	/*if (get == -1)
	{
		free(line);
		return (EXIT_FAILURE);
	}
	else
	{
		while ()
	}*/
	return (0);
}
