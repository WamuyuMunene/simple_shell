#include "main.h"

/**
 * _strcpy - custom strcpy func
 *
 * @source: source
 * @dest: where to input copied str
 *
 * Return: void
 */

void _strcpy(char *source, char *dest)
{
	int i = 0;

	for (; source[i] != '\0'; i++)
	{
		dest[i] = source[i];
	}
	dest[i] = '\0';
}
