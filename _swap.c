#include "monty.h"

/**
 * _swap -  swaps the top two elements of the stack.
 *
 *@stack:  Double pointer to the head of the Stack. 
 *
 *@line_number:  Number of the line.
 */

void _swap(stack_t **stack, unsigned int line_number)
{
	int _stack = 0;
	stack_t *tmp = *stack;

	if (!stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: Need to use line_num\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		_stack = tmp->n;
		tmp->n = tmp->next->n;
		tmp->next->n = _stack;
	}

}
