#include "main.h"

/**
 * env - output environ
 *
 * @tokenized_command: command
 *
 * Return: void
 */

void env(char **tokenized_command __attribute__((unused)))
{
	int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		print(environ[i], STDOUT_FILENO);
		print("\n", STDOUT_FILENO);
	}
}
