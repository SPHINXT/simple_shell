#include "main.h"

/**
 * _readLine - function that reads the input from the prompt
 *
 * Return: arguments passed as commands
 */

char *_readLine(void)
{
	char *buffer = NULL;
	size_t bufsize = 0;

	if (getline(&buffer, &bufsize, stdin) == -1)
	{
		perror("Error");
		return (NULL);
	}
	if (buffer == NULL)
	{
		perror("Error");
		return (NULL);
	}
	return (buffer);
}
