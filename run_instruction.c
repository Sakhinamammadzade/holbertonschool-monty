#include "monty.h"


/**
 * run_instruction - runs the instruction
 *
 * @line: line of the file
 * @stack: pointer to the stack
 * @instructions: array of instructions
 * @line_number: line number of the file
 *
 */
void run_instruction(char *line, stack_t **stack,
instruction_t *instructions, unsigned int line_number)
{
	char *opcode = NULL, *arg = NULL;
	int i = 0;
	unsigned int value;

	opcode = strtok(line, " \n\t$");
	if (opcode == NULL)
		return;
	arg = strtok(NULL, " \n\t$");
	if (arg != NULL)
		value = atoi(arg);
	while (instructions[i].opcode != NULL)
	{
		if (strcmp(opcode, instructions[i].opcode) == 0)
		{
			if (strcmp(opcode, "push") == 0)
			{
				if (arg == NULL || is_number(arg) == 0)
				{
					fprintf(stderr, "L%u: usage: push integer\n", line_number);
					exit(EXIT_FAILURE);
				}
				instructions[i].f(stack, value);
				return;
			}
			else
			{
				instructions[i].f(stack, line_number);
				return;
			}
		}
		i++;
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
