#include "monty.h"

void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *pall_ = *stack;
	(void)line_number;
	while (pall_)
	{
		printf("%d\n", pall_->n);
		pall_ = pall_->next;
	}
}

void _push(stack_t **stack, unsigned int line_num)
{
	stack_t *new_node;

	if (!stack)
	{
		fprintf(stderr, "L%d: Need to use line_num\n", line_num);
		exit(EXIT_FAILURE);
	}
	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		exit(EXIT_FAILURE);
	}
	new_node->n = glob_vars.glob_int;
	new_node->next = (*stack);
	new_node->prev = NULL;
	if (*stack)
		(*stack)->prev = new_node;
	*stack = new_node;
}
