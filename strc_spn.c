#include "main.h"

/**
 * _strcspn - custom strcspn func
 *
 * @str1: str
 * @str2: str
 *
 * Return: int
 */

int _strcspn(char *str1, char *str2)
{
	int len = 0, i;

	for (i = 0; str1[i] != '\0'; i++)
	{
		if (_strchr(str2, str1[i]) != NULL)
			break;
		len++;
	}
	return (len);
}
