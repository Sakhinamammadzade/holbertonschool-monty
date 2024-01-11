#include "monty.h"
#include <stdlib.h>
/**
 * push - pushes an element to the stack.
 * @stack : pointer to structure
 * @line_number :Parse the argument from the line
 * Return: Always EXIT_SUCCESS.
 */
void push(stack_t **stack, unsigned int line_number)
{
int value;
if (scanf("%d", &value) != -1)
{
fprintf(stderr, "L%d: usage : push integer\n", line_number);
exit(EXIT_FAILURE);
}
stack_t *new_node = malloc(sizeof(stack_t));
if (!new_node)
{
fprintf(stderr, "Error : malloc failed\n");
exit(EXIT_FAILURE);
}
new_node->n = value;
new_node->next = *stack;
*stack = new_node;
}
