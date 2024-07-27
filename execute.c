#include "shell.h"

/**
 * execute_command - executes a command using execvp.
 * @command: the command to execute
 * Return: void
 */

void execute_command(char *command)
{
pid_t pid;
int status;
pid = fork();

if (pid == -1)
{
perror("fork");
exit(EXIT_FAILURE);
}
if (pid == 0)
{
execlp(command, command, (char *)NULL);
perror("execlp");
exit(EXIT_FAILURE);
}
else
{
waitpid(pid, &status, 0);
}
}
