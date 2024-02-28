#include "main.h"

/**
 * print - function for printing str
 *
 * @string: str
 * @stream: stdout that will be printed to
 *
 * Return: void
 */

void print(char *string, int stream)
{
	int i = 0;

	for (; string[i] != '\0'; i++)
	{
		write(stream, &string[i], 1);
	}
}
