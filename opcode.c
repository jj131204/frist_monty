#include "monty.h"

/**
 * _opcode - Function for select de parameters (spacifiers)
 *
 *@line: Entry parameter.
 *
 *@stack: Double pointer to the head of the Stack.
 *
 *@lines_num: number of the line
 */

void _opcode(char *line, stack_t **stack, unsigned int lines_num)
{
	unsigned int count = 0;

	instruction_t specifiers[] = {
		{"pall", _pall},
		{"push", _push},
		{"pint", _pint},
		{"pop",  _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{NULL, NULL}
	};

	while (count < 7)
	{
		if (strcmp(specifiers[count].opcode, line) == 0)
		{
			specifiers[count].f(stack, lines_num);
			break;
		}
		count++;
	}

	if (!specifiers[count].opcode)
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", lines_num, line);
		exit(EXIT_SUCCESS);
	}
}
