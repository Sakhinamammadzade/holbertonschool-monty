#include "monty.h"

/**
 * add - function to add top two elements on stack
 * @stk: stack
 * @linenum: line number
 * Return: void
 */
<<<<<<< HEAD
void add(stack_t **stk, unsigned int linenum)
{
	int adding;

	if (stk == NULL || *stk == NULL || (*stk)->next == NULL)
	{
		dprintf(2, "L%d: can't add, stack too short\n", linenum);
		free_stk(stk, linenum);
		exit(EXIT_FAILURE);
	}
        
	adding = (*stk)->n + (*stk)->next->n;
	pop(stk, linenum);
	(*stk)->n = adding;
=======

void add(stack_t **stk, unsigned int linenum)
{
	int adding;
	if (stk == NULL || *stk == NULL || (*stk)->next == NULL)
	{
		printf("L%d: can't add, stack too short\n", linenum);
		free_stk(stk, linenum);
		exit(EXIT_FAILURE);
	}
	adding = variables.holder;
	pop(stk, linenum);
	adding += variables.holder;
	pop(stk, linenum);
	variables.holder = adding;
	push(stk, linenum);
>>>>>>> 6f191493e420606f74bbc8abc63ddbbac4bc6ab8
}
