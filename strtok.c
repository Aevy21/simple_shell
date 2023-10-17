#include "main.h"

/**
 * _strtok - Splits a string into tokens based on specified delimiters.
 * @str: The input string to be tokenized.
 * @delimiters: A string containing delimiter characters.
 *
 * Return: A pointer to the next token or NULL if no more tokens are found.
 */

char *_strtok(char *str, const char *delimiters)
{
	static char *nextToken;
	int isDelimiter = 0;
	char *tokenStart;
	int i;

	/*If 'str' is not NULL, initialize or reset 'nextToken' to the start of 'str'*/
	if (str != NULL)
	{
		nextToken = str;
	}

	/* If 'nextToken' is NULL or points to the end of the string, return NULL*/

	if (nextToken == NULL || *nextToken == '\0')
	{
		return (NULL);
	}

	tokenStart = nextToken;

	/* Iterate through the string until a delimiter is found or the end of the string*/
	while (*nextToken != '\0')
	{

		/*Check if the current character is a delimiter*/
		for (i = 0; delimiters[i] != '\0'; i++)
		{
			if (*nextToken == delimiters[i])
			{
				isDelimiter = 1;
				break;
			}
		}

		/* If a delimiter is found, replace it with a null terminator  */
		if (isDelimiter)
		{
			*nextToken = '\0';
			nextToken++;

			/* If there are more characters left, return the token */
			if (*nextToken != '\0')
			{
				return (tokenStart);
			}
		}

		/*Move to the next character in the string*/
		nextToken++;
	}

	/* If no more tokens are found, return the last token*/
	return (tokenStart);
}

