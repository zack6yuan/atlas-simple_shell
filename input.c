#include "shell.h"

/**
 * read_input - Reads a line of input from stdin.
 * Return: a pointer to the input string, or NULL if an error occurs
 */
char *read_input(void)
{
    char *input;
    size_t len;
    ssize_t bytes;
    input = malloc(MAX_INPUT_SIZE); /*allocate memory for the input string*/

    if (!input) /*checks if malloc failed*/
    {
        perror("malloc");
        exit(EXIT_FAILURE); /*exits with failure status*/
    }

    bytes = read(STDIN_FILENO, input, MAX_INPUT_SIZE - 1);
    if (bytes <= 0) /*checks read bytes, if <=0, EOF, dalloc input mem*/
    {
        free(input);
        return (NULL);
    }
    input[bytes] = '\0'; /*adds NULL to show string end*/

    size_t len = strlen(input);

    if (len > 0 && input[len - 1] == '\n') /*calculate length of input string*/
    {
        input[len - 1] = '\0'; /*if last char is /n, replace with NULL char*/
    }
    return (input); /*return input string*/
}
