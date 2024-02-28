#include "main.h"

/**
 * _strspn - custom strspn func
 *
 * @str1: str
 * @str2: str
 *
 * Return: int
 */

int _strspn(char *str1, char *str2)
{
	int i = 0;
	int match = 0;

	while (str1[i] != '\0')
	{
		if (_strchr(str2, str1[i]) == NULL)
			break;
		match++;
		i++;
	}
	return (match);
}
