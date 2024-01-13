#include "monty.h"
/**
 * pall - function prints all of stack
 * @stk: top of stack
 * @linenum: line number
 * Return: void
 */
void pall(stack_t **stk, unsigned int linenum)
{
	stack_t *print;

	if (stk == NULL)
	{
		printf("L%d: invalid stack\n", linenum);
		exit(EXIT_FAILURE);
	}

	print = *stk;

	while (print != NULL)
	{
		printf("%d\n", print->n);
		print = print->next;
	}
}
