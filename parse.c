#include "shell.h"

/**
 * parse_input - Parses a line of input into an array of arguments.
 * @input: the input string to parse
 * Return: an array of arguments, or NULL if an error occurs
 */
char **parse_input(char *input)
{
    char **args; /*array of strings*/
    char *arg; /*string*/
    int i = 0;

    args = malloc(MAX_ARGS * sizeof(char *)); /*memory allocated for array args*/
    if (!args) /*checks if malloc failed*/
    {
        perror("malloc");
        exit(EXIT_FAILURE); /*exits with failure status*/
    }
    arg = strtok(input, " "); /*split input string into tokens, seperated by spaces*/

    while (arg != NULL) /*split until no more tokens, and increment*/
    {
        args[i] = arg;
        i++;
        arg = strtok(NULL, " ");
    }
    args[i] = NULL;
    return (args); /*args array is returned*/
}
