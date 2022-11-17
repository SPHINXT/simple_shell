#include "main.h"

/**
 * main - Main Entry
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *prompt = "$ ";
	char **tokens, *args;
	int execStatus;

	do {
		if (write(STDOUT_FILE, prompt, _strlen(prompt)) == -1)
		{
			exit(-1);
		}
		args = readLine();
		tokens = tokenizer(args);
		execStatus = execute(tokens);

		free(tokens);
		free(args);
	} while (execStatus);
	return (0);
}
