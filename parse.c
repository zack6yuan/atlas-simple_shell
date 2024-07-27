#include "shell.h"

/**
 * Parses a line of input into an array of arguments.
 *
 * input: the input string to parse
 *
 * Returns an array of arguments, or NULL if an error occurs
 */
char **parse_input(char *input)
{
char **args;
char *arg;
int i = 0;
args = malloc(MAX_ARGS * sizeof(char *));
if (!args)
{
perror("malloc");
exit(EXIT_FAILURE);
}
arg = strtok(input, " ");
while (arg != NULL)
{
args[i] = arg;
i++;
arg = strtok(NULL, " ");
}
args[i] = NULL;
return (args);
}
