#include "monty.h"

/**
 * add - function to add top two elements on stack
 * @stk: stack
 * @linenum: line number
 * Return: void
 */
void add(stack_t **stk, unsigned int linenum)
{
	int adding;

	if (stk == NULL || *stk == NULL || (*stk)->next == NULL)
	{
		dprintf(2, "L%d: can't add, stack too short\n", linenum);
		free_stk(stk, linenum);
		exit(EXIT_FAILURE);
	}
	adding = variables.holder;
	pop(stk, linenum);
	adding += variables.holder;
	pop(stk, linenum);
	variables.holder = adding;
	push(stk, linenum);

}
