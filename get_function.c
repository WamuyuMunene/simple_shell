#include "main.h"

/**
 * get_func - used to fetch function using mappings and commands
 *
 * @command: command
 *
 * Return: NULL Fail or func
 */

void (*get_func(char *command))(char **)
{
	int i;
	function_map mapping[] = {
		{"env", env}, {"exit", quit}
	};

	for (i = 0; i < 2; i++)
	{
		if (_strcmp(command, mapping[i].command_name) == 0)
			return (mapping[i].func);
	}
	return (NULL);
}
