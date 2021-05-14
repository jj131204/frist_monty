#include "monty.h"

void _mul(stack_t **stack, unsigned int line_number)
{
	stack_t *mull_node = *stack;
        int mull = 0;

        if (!stack || (*stack)->next == NULL)
        {
                fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
                exit(EXIT_FAILURE);
        }

	mull = (*stack)->n * (*stack)->next->n;
	(*stack)->next->n = mull;
	*stack = (*stack)->next;
	free(mull_node);
}
