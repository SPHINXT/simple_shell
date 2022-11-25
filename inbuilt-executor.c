#include "main.h"

/**
 * argsExecute - function that executes the program referred to by pathname
 * @tokens: args passed to be executed
 *
 * Return: -1 on error, NULL on error
 */
int argsExecute(char **tokens)
{
	char *execLibrary[] = {
		"cd",
		"help",
		"exit"
	};
	int count = 0;

	if (tokens[0] == NULL)
	{
		return (1);
	}
	while (count < numofExecutables())
	{
		if (strcmp(tokens[0], execLibrary[count]) == 0)
		{
			return ((*inbuiltFunctions[count])(tokens));
		}
		count++;
	}
	return (Execute(tokens));
}
