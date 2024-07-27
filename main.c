#include "shell.h"

/**
 * main - prompts the user for input, reads the input, and executes the command
 * then frees the input
 * Return: 0 on success, or -1 if an error occurs
 */
int main(void)
{
char *input;
while (1)
{
printf(PROMPT);
fflush(stdout);
input = read_input();
if (input == NULL)
{
printf("\n");
break;
}

if (strcmp(input, "exit") == 0)
{
free(input);
break;
}
if (strlen(input) > 0)
{
execute_command(input);
}
free(input);
}
return (0);
}
