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
	char *value = strtok(NULL, DELIMITERS);
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
	new_node = new_Node(atoi(value));
	new_node->next = (*stack);
	new_node->prev = NULL;
	if (*stack)
		(*stack)->prev = new_node;
	*stack = new_node;
}

/*{
char *value = strtok(NULL, DELIMITERS);
	stack_t *new = NULL;
	int i = 0;
	(void)line_num;

	if (!value)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_num);
		exit(EXIT_FAILURE);
	}
	while (value[i] != '\0')
	{
		if(!isdigit(value[i]) && value[i] != '-')
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_num);
			exit(EXIT_FAILURE);
		}
		i++;
	}

	new = new_Node(atoi(value));

	new->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new;
	*stack = new;
}*/

stack_t *new_Node(int n)
{
	stack_t *node = NULL;

	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	node->n = n;
	node->next = NULL;
	node->prev = NULL;

	return (node);
}
