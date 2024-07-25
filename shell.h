#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <ctype.h>

#define MAX_INPUT_SIZE 1024
#define MAX_ARGS 64

char* read_input();
char** parse_input(char* input);
void execute_command(char *command);

#endif
