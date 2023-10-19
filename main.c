#include "main.h"

int main(void);
/**
 * main - Entry point for the MyShell program.
 *
 * This function initializes the shell, reads user input, parses commands into
 * arguments, and executes them. It also displays the shell prompt and handles
 * errors in the shell's operation.
 *
 * Return: 0 upon successful execution or an error code upon failure.
 */

int main(void)
{
	char *input = NULL;
	size_t n = 0;
	char *args[MAX_ARGS];
	ssize_t bytes_read;
	int arg_count = 0;

	while (1)
	{
		/* Display the shell prompt */
		display_prompt();

		/* Read user input using read */
		bytes_read = getline(&input, &n, stdin);

		if (bytes_read == -1)
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			free(input);
			break; /* Exit the  shell*/
		}

		/* Parse the command into arguments */
		parse_command(input, args);
		if (args[0] == NULL)
		{
			continue;
		}

		/*handle implement inbuilt exit command */
		handle_exit_command(args, arg_count, input);
		/* Check if the user entered the 'env' command */
		if (_strcmp(args[0], "env") == 0)
		{
			printEnvironmentVariables();
		}
		else
		{
			/* Execute the command */
			execute_command(args, input);
		}
	}

	return (0);
}

