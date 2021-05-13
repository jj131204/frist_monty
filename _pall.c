#include "monty.h"

void _pall(stack_t **stack, unsigned int line_number)
{
        stack_t *pall_ = *stack;
        (void)line_number;
        while (pall_)
        {
                dprintf(STDOUT_FILENO, "%d\n", pall_->n);
                pall_ = pall_->next;
        }
}
