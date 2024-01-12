#include "monty.h"
#include <stdlib.h>
/**
 * main - main function
 * @argc:arguments of main
 * @argv: argument vector
 * Return: Always EXIT_SUCCESS.
 */

int main(int argc, char *argv[0])
{
if (argc != 2)
{
fprintf(stderr, "Usage :%s <filename>\n", argv[0]);
exit(EXIT_FAILURE);
}

execute_file(argv[1]);
return (EXIT_SUCCESS);
}

/**
 *execute_file - file execute
 @filename: pointer
 *Return: EXIT_SUCCESS or EXIT_FAILURE
 */
void execute_file(char *filename)
{
FILE *file = fopen(filename, "r");
if (!file)
{
fprinf(stderr, "Error: Can't open file %s\n", filename);
exit(EXIT_FAILURE);
char *line = NULL;
size_t len = 0;
unsigned int line_number = 0;
while (getline(&line, &len, file) != -1)
{
line_number++;
char *token = strtok(line, "$$");
while (token != NULL)
{
if (strcmp(token, "push 1") == 0)
{
push(&global_stack, 1);
}
else if (strcmp(token, "push 2") == 0)
{
push(&global_stack, 2);
}
token = strtok(NULL, "$$");
}
}
free(line);
fclose(file);
}
