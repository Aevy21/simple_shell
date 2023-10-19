#include "main.h"

/**
 * is_exit_command - Check if a command is an "exit" command.
 * @command: The command to check.
 *
 * Return: 1 if the command is "exit," 0 otherwise.
 */
int is_exit_command(char *command)
{
	return (_strcmp(command, "exit") == 0);
}

/**
 * handle_exit_command - Handle the "exit" command with optional exit code.
 * @args: An array of command arguments.
 * @arg_count: The number of arguments in the array.
 * @input: input string.
 */
void handle_exit_command(char *args[], int arg_count, char *input)
{
	if (is_exit_command(args[0]))
	{
		free(input);

		if (arg_count > 1)
		{
			int exit_code = _atoi(args[1]);
			exit(exit_code);
		}
		else
		{
			exit(0); /* Use 0 as the default exit code.*/
		}
	}
}

