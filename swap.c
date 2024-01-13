#include "monty.h"

void swap(stack_t **stk, unsigned int linenum)
{
	stack_t *tmp = NULL;
	int tmp_n = 0;

	if(*stack == NULL || (*stack)->next == NULL) 
	{
		fprintf(stderr,"L%d: can't swap, stack too short\n",linenum);
		exit(EXIT_FAILURE);
	}
	`

	
}
