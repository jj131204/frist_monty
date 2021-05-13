#include "monty.h"

/**
 * free_stack - Free a stack.
 * @stack: Head node.
 * Return: Nothing.
 */
void free_stack(stack_t *stack)
{
	stack_t *tmp = stack;

	if (tmp != NULL)
	{
		stack = stack->next;
		free(tmp);
	}
}
