#include "shell.h"

/**
 * main - Prompts the user for input, reads the input, and executes the command.
 *        Then frees the input.
 *
 * Return: 0 on success, or -1 if an error occurs.
 */
int main(void)
{
    char *input; /*pointer to char*/

    while (1) /*start infinite loop*/
    {
        printf(PROMPT); /*print prompt. defined in shell.h*/
        fflush(stdout); /*ensure prompt is displayed correctly*/
        input = read_input(); /*reads input from the user*/

        if (input == NULL) /*if input = NULL, reaches EOF, print newline*/
        {
            printf("\n");
            break; /*breaks the loop*/
        } 

        if (strcmp(input, "exit") == 0) /*checks if input string is = "exit"*/
        {
            free(input); /*frees memory for the input string*/
            break; /*breaks the lloop while input = "exit"*/
        }

        if (strlen(input) > 0) /*while input str is not empty*/
        {
            execute_command(input); /*call the execute command*/
        }

        free(input); /*frees memory allocated for the input string after processing*/
    }

    return (0);
}
