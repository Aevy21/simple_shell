Certainly! Here's an extended version of your README with the compilation and testing instructions, as well as a table of allowed functions:

```markdown
# Custom Shell - MyShell

MyShell is a custom Unix shell project developed in C, providing a command-line interface with additional features and extensibility.

## Features

- Execute single commands and manage their output.
- Support for command chaining using pipes and redirection.
- Customizable prompt and environment variables.
- Built-in commands and extensible command handling.
- Error handling and reporting.

## Compilation

Compile your shell using the following command:

```shell
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o myshell
```

## Testing

### Interactive Mode

Your shell should work like this in interactive mode:

```shell
$ ./myshell
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

### Non-Interactive Mode

Your shell should work in non-interactive mode as well:

```shell
$ echo "/bin/ls" | ./myshell
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./myshell
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```

## Allowed Functions

The following functions are allowed in your project. Ensure to provide a table with their return values, usage, and arguments:

| Function                   | Return Value | Usage                  | Arguments                                      |
| -------------------------- | ------------ | ---------------------- | ---------------------------------------------- |
| `access`                   | int          | Check file accessibility | `const char *pathname, int mode`              |
| `chdir`                    | int          | Change working directory | `const char *path`                            |
| `close`                    | int          | Close a file descriptor | `int fd`                                      |
| `execve`                   | int          | Execute a program       | `const char *pathname, char *const argv[], char *const envp[]` |
| `exit`                     | void          | Terminate the process | `int status`                                   |
| `fork`                     | pid_t        | Create a new process    | None                                           |
| `free`                     | void         | Deallocate memory       | `void *ptr`                                    |
| `getcwd`                   | char*        | Get current directory   | `char *buf, size_t size`                      |
| `getline`                  | ssize_t      | Read input line         | `char **lineptr, size_t *n, FILE *stream`     |
| `malloc`                   | void*        | Allocate memory         | `size_t size`                                  |
| `open`                     | int          | Open a file             | `const char *pathname, int flags, mode_t mode` |
| `perror`                   | void          | Print error message     | `const char *s`                               |
| `wait`                     | pid_t        | Wait for child process  | `int *status`                        


