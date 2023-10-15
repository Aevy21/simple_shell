#include "main.h"

/**
 * main - Entry point for the MyShell program.
 *
 * This function initializes the shell, reads user input, parses commands into
 * arguments, and executes them. It also displays the shell prompt and handles
 * errors in the shell's operation.
 *
 * Return: 0 upon successful execution or an error code upon failure.
 */

int main()
{
	char input[MAX_INPUT_LENGTH];
	char* args[MAX_ARGS];
	ssize_t bytes_read;
	int arg_count = 0;

	while (1)
	{
		/* Display the shell prompt */
		display_prompt();

		/* Read user input using read */
		bytes_read = read(STDIN_FILENO, input, sizeof(input));

		if (bytes_read == -1)
		{
			perror("Read error");
			exit(EXIT_FAILURE);
		} else if (bytes_read == 0) {
			break; /* End of input */
		}
		/* Null-terminate the input */
		input[bytes_read] = '\0';
/* Check if the input contains only spaces*/
      et number
	      (check_space(input);
		/* Parse the command into arguments */

		parse_command(input, args);

		/*handle implement inbuilt exit command */
		handle_exit_command(args, arg_count);
	/* Check if the user entered the 'env' command */
        if (strcmp(args[0], "env") == 0) {
            printEnvironmentVariables();
        } else 
	{
            /* Execute the command */
            execute_command(args);
        }
	}

	if (errno != 0)
	{
		perror("Unexpected error");
	}
	return (0);
}

