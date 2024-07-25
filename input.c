#include "shell.h"

/**
 * Reads a line of input from stdin.
 * 
 * Returns a pointer to the input string, or NULL if an error occurs
 */

char* read_input() {
char *input;
size_t len;
input = malloc(MAX_INPUT_SIZE);
if (!input) {
perror("malloc");
exit(EXIT_FAILURE);
}
if (fgets(input, MAX_INPUT_SIZE, stdin) == NULL) {
if (feof(stdin)) {
free(input);
return NULL;
} else {
perror("fgets");
free(input);
exit(EXIT_FAILURE);
}
}
len = strlen(input);
if (len > 0 && input[len - 1] == '\n') {
    input[len - 1] = '\0';
}
return input;
}
