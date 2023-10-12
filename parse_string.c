#include "main.h"

/**
 * parse_command - Parse a command into arguments.
 * @command: The input command string to be parsed.
 * @args: An array to store the parsed arguments.
 */

void parse_command(char* command, char** args)
{
    char* token = strtok(command, " \t\n");

    int arg_count = 0;
    while (token != NULL)
{
        args[arg_count++] = token;
        token = strtok(NULL, " \t\n");
    }
    args[arg_count] = NULL;
}

