#include "monty.h"

/**
 * push - adds to the beginning of the stack
 * @stk: top of stack
 * @linenum: line number for the passed token
 * Return: void
 */
void push(stack_t **stk, unsigned int linenum)
{
	stack_t *new;

	if (stk == NULL)
	{
		printf("L%d: unknown stack\n", linenum);
		exit(EXIT_FAILURE);
	}

	new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		printf("Error: malloc failed\n");
		free_stk(stk, linenum);
		exit(EXIT_FAILURE);
	}
	new->n = variables.holder;
	new->prev = NULL;
	new->next = *stk;

	if (*stk != NULL)
		(*stk)->prev = new;
	*stk = new;
}
