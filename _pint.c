#include "monty.h"

/**
 * _pint - prints the value at the top of the stack
 *
 * @stack: Double pointer to the head of the Stack.
 *
 * @line_number: Number of the line.
 *
 */

void _pint(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack)
	{
		fprintf(stderr, "L%d: can't pint, stack empty", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		printf("%d\n", (*stack)->n);
	}

}
