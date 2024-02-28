#include "main.h"

/**
 * _strchr - look for char in str
 *
 * @c: char
 * @str: str
 *
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != c && s[i] != '\0'; i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
