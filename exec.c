#include "main.h"
/**
 * execute_command - Execute a command in a child process.
 * @args: An array of arguments for the command to be executed.
 */
void execute_command(char *args[])
{
	pid_t pid = fork();
	char **env = environ;
	char full_path[1024];

	if (args[0] == NULL)
	{
		/* Empty command, do nothing */
		return;
	}
	if (pid == -1)
	{
		perror("Fork error");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		/* Child process */
		if (strchr(args[0], '/') != NULL)
		{
			/* The command includes a path, execute directly */
			if (execve(args[0], args, env) == -1)
			{
				perror("Execve error");
				exit(EXIT_FAILURE);
			}
		}
		else
		{
			/* Construct the full path and execute.*/
			construct_full_path("/bin", args[0], full_path, sizeof(full_path));
			if (execve(full_path, args, env) == -1)
			{
				perror("Execve error");
				exit(EXIT_FAILURE);
			}
		}
	}
	else
	{
		/* This part is for the parent process */
		int status;
		if (wait(&status) == -1)
		{
			perror("Wait error");
			exit(EXIT_FAILURE);
		}
		}
}
