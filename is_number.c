#include "monty.h"


/**
 * is_number - checks if a string is a number
 *
 * @arg: string to check
 *
 * Return: 1 if true, 0 if false
 */
int is_number(char *arg)
{
	int i = 0;

	if (arg == NULL)
		return (0);
	if (arg[0] == '-')
		i++;
	while (arg[i] != '\0')
	{
		if (isdigit(arg[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
