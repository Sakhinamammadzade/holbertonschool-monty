#include "monty.h"

void swap(stack_t **stk, unsigned int linenum)
{
	stack_t *tmp = NULL;
	int tmp_n = 0;

	if(*stk == NULL || (*stk)->next == NULL) 
	{
		fprintf(stderr,"L%d: can't swap, stack too short\n",linenum);
		exit(EXIT_FAILURE);
	}
	tmp = *stk;
	tmp_n = tmp->n;
	tmp->n = tmp_n;

	tmp->n = tmp->next->n;
	tmp->next->n = tmp_n;
}
