#include "monty.h"
/**
 * pint - function prints the value at the top of the stack
 * @stk: stack
 * @linenum: line number
 * Return: void
 */
void pint(stack_t **stk, unsigned int linenum)
{
	if (stk == NULL || *stk == NULL)
	{
		printf("L%d: can't pint, stack empty\n", linenum);
		exit(EXIT_FAILURE);
	}
	else
		printf("%d\n", (*stk)->n);
}
