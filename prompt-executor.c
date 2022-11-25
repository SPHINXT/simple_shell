#include "main.h"

/**
 * promptLoop - function that returns the prompt for another entry
 *
 * Return: nothing
 */
void promptLoop(void)
{
	char *prompt = "$ ";
	char **tokens, *args;
	int execStatus;

	do {
		write(STDOUT_FILENO, prompt, strlen(prompt));
		args = _readLine();
		tokens = argsTokenizer(args);
		execStatus = argsExecute(tokens);

		free(tokens);
		free(args);
	} while (execStatus);
}
