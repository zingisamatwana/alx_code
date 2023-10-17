#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: string
 *
 * Return: the length
 */

int _strlen(char *s)
{
	int len;

	if (s)
	{
		for (len = 0; s[len] != '\0'; len++)
			continue;

		return (len);
	}

	return (0);
}
