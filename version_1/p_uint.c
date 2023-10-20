#include "main.h"

/**
 * p_uint - writes hexidecimal to stdout
 * @n: value to print
 *
 * Return: number of bytes printed
 */

int p_uint(uint n)
{
	int needed, i;
	char *buffer;

	needed = snprintf(NULL, 0, "%u", n);
	buffer = malloc(sizeof(char) * needed);
	if (!buffer)
		return (-1);
	sprintf(buffer, "%u", n);
	for (i = 0; i < needed; i++)
		_putchar(buffer[i]);
	free(buffer);

	return (needed);
}

