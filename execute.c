#include "shell.h"

/**
 * execute_command - executes a command using execvp.
 * @command: the command to execute
 * Return: void
 */

void execute_command(char *command)
{
    pid_t pid; /*variable for process ID*/
    int status;
    pid = fork(); /*called to create new process*/

    if (pid == -1) /*checks if fork failed*/
    {
        perror("fork");
        exit(EXIT_FAILURE); /*exits with failure status*/
    }
    if (pid == 0)
    {
        execlp(command, command, (char *)NULL);
        perror("execlp");
        exit(EXIT_FAILURE);
    }
    else
    {
        waitpid(pid, &status, 0); /*suspends the parent until child completes*/
    }
    }
