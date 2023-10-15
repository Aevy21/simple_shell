#include "main.h"

/**
 * is_exit_command - Check if a command is an "exit" command.
 * @command: The command to check.
 *
 * Return: 1 if the command is "exit," 0 otherwise.
 */
int is_exit_command(const char *command)
{
	return (strcmp(command, "exit") == 0);
}

/**
 * handle_exit_command - Handle the "exit" command with optional exit code.
 * @args: An array of command arguments.
 * @arg_count: The number of arguments in the array.
 */
void handle_exit_command(char *args[], int arg_count)
{
	if (is_exit_command(args[0]))
	{
		if (arg_count > 1)
		{
			int exit_code = atoi(args[1]);

			exit(exit_code);
		}
		else
		{
			exit(EXIT_CODE); /* Use the predefined exit code.*/
		}
	}
}

