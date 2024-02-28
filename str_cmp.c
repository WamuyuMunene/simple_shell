#include "main.h"

/**
 * _strcmp - custom strcmp func
 *
 * @first: str
 * @second: str
 *
 * Return: first - second
 */

int _strcmp(char *first, char *second)
{
	int i = 0;

	while (first[i] != '\0')
	{
		if (first[i] != second[i])
			break;
		i++;
	}

	return (first[i] - second[i]);
}
