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
fprintf(stderr, "Usage :%s <integer>\n", argv[0]);
exit(EXIT_FAILURE);
}
FILE *file = fopen(argv[1], "r");
if (!file)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
global_stack = NULL;
char *line = NULL;
size_t len = 0;
unsigned int line_number = 0;

while (getline(&line, &len, file) !=  -1)
{
line_number++;
}
free(line);
fclose(file);
return (EXIT_SUCCESS);
}

