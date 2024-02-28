#include "main.h"

/**
 * remove_comment - handles single line comments
 *
 * @input: comment
 *
 * Return: void
 */

void remove_comment(char *input)
{
	int i = 0;

	if (input[i] == '#')
		input[i] = '\0';
	while (input[i] != '\0')
	{
		if (input[i] == '#' && input[i - 1] == ' ')
			break;
		i++;
	}
	input[i] = '\0';
}
