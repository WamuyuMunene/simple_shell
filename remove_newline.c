#include "main.h"

/**
 * remove_newline - remove newline
 *
 * @str: str
 *
 * Return: void
 */

void remove_newline(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			break;
		i++;
	}
	str[i] = '\0';
}
