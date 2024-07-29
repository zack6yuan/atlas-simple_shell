#include "shell.h"

/**
 * read_input - Reads a line of input from stdin.
 * Return: a pointer to the input string, or NULL if an error occurs
 */
char *read_input(void)
{
    char *input;
    size_t len;
    input = malloc(MAX_INPUT_SIZE); /*allocate memory for the input string*/

    if (!input) /*checks if malloc failed*/
    {
        perror("malloc");
        exit(EXIT_FAILURE); /*exits with failure status*/
    }

    if (fgets(input, MAX_INPUT_SIZE, stdin) == NULL)
    {
        if (feof(stdin))
        {
            free(input);
            return (NULL);
        }
        else
        {
            perror("fgets");
            free(input);
            exit(EXIT_FAILURE);
        }
    }
    len = strlen(input);

    if (len > 0 && input[len - 1] == '\n') /*calculate length of input string*/
    {
        input[len - 1] = '\0'; /*if last char is /n, replace with NULL char*/
    }
    return (input); /*return input string*/
}
