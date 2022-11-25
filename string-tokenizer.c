#include "main.h"

/**
 * argsTokenizer - function that splits the strings in the buffer
 * @args: string to be broken into tokens
 *
 * Return: tokens or NULL if error
 */

char **argsTokenizer(char *args)
{
	char **buffer, *token;
	int bufSize = ShBUFSIZE;
	int tokenPosition = 0;

	buffer = malloc(bufSize * sizeof(char *));
	if (!buffer)
	{
		perror("Error");
		exit(EXIT_FAILURE);
	}
	token = strtok(args, DELIM);
	while (token)
	{
		buffer[tokenPosition] = token;
		tokenPosition++;
		if (tokenPosition >= bufSize)
		{
			bufSize += ShBUFSIZE;
			buffer = realloc(buffer, bufSize * sizeof(char *));
			if (!buffer)
			{
				perror("Error");
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, DELIM);
	}
	buffer[tokenPosition] = NULL;
	return (buffer);
}
