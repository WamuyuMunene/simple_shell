#include "main.h"

/**
 * _strlen - custom strlen func
 *
 * @string: str
 *
 * Return: len
 */

int _strlen(char *string)
{
	int len = 0;

	if (string == NULL)
		return (len);
	for (; string[len] != '\0'; len++)
		;
	return (len);
}
