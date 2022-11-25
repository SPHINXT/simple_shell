#include "main.h"

/**
 * Execute - executes already built shell commands using execve
 * @tokens: args passed to be executed
 *
 * Return: -1 on error, NULL on error
 */
int Execute(char **tokens)
{
	pid_t myPid;
	int status;

	if (!tokens)
	{
		perror("Error");
		return (-1);
	}
	myPid = fork();
	if (myPid < 0)
	{
		perror("Error");
		return (-1);
	}
	else if (myPid == 0)
	{
		if (execve(tokens[0], tokens, NULL) == -1)
		{
			perror("Error");
			return (-1);
		}
	}
	else
	{
		do {
			waitpid(myPid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return (1);
}

