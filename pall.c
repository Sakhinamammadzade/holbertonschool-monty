#include "monty.h"
#include <stdlib.h>
/**
 * pall - points stacks next
 * @stack: pointer of stack
 * @line_number: line number
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
stack_t *current = *stack;
while (current)
{
printf("%d\n", current->n);
current = current->next;
}
(void)line_number;
}
