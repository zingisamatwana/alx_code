#include "main.h"

/**
 * p_string - writes string to stdout
 * @s: value to print
 *
 * Return: number of bytes printed
 */

int p_string(char *s)
{
	int needed, i;
	char *buffer;

	needed = snprintf(NULL, 0, "%s", s);
	buffer = malloc(sizeof(char) * needed);
	if (!buffer)
		return (-1);
	sprintf(buffer, "%s", s);
	for (i = 0; i < needed; i++)
		_putchar(buffer[i]);

	free(buffer);

	return (needed);
}

