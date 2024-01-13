#include "monty.h"
/**
 * pop - function to pop the top of stack
 * @stk: top of stack
 * @linenum: line number
 * Return: void
 */
void pop(stack_t **stk, unsigned int linenum)
{
	if (stk == NULL || *stk == NULL)
	{
		printf("L%d: can't pop an empty stack\n", linenum);
		exit(EXIT_FAILURE);
	}
	if ((*stk)->next != NULL)
	{
		*stk = (*stk)->next;
		variables.holder = (*stk)->n;
		free((*stk)->prev);
		(*stk)->prev = NULL;
	}
	else
	{
		free(*stk);
		*stk = NULL;
	}
}
