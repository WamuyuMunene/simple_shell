#include "main.h"

/**
 * _strcat - custom strcat func
 *
 * @destination: str
 * @source: str
 *
 * Return: str
 */

char *_strcat(char *destination, char *source)
{
	char *new_string =  NULL;
	int len_dest = _strlen(destination);
	int len_source = _strlen(source);

	new_string = malloc(sizeof(*new_string) * (len_dest + len_source + 1));

	_strcpy(destination, new_string);
	_strcpy(source, new_string + len_dest);
	new_string[len_dest + len_source] = '\0';

	return (new_string);
}
