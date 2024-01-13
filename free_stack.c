#include "monty.h"

/**
 * free_stack - a function that frees all dynamically
 * allocated memory associated with a stack.
 *
 * @stack: pointer to the stack
 *
 */

void free_stack(stack_t *stack)
{
	stack_t *curr = NULL, *temp = NULL;

	curr = stack;

	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
	stack = NULL;
}
