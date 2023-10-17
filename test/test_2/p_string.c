#include "main.h"

/**
 * p_string - writes string to stdout
 * @s: value to print
 *
 * Return: number of bytes printed
 */

int p_string(char *s)
{
	int ret, i;
	char *tmp;

	tmp = malloc(sizeof(char) * _strlen(s));
	if (!tmp)
		return (-1);
	sprintf(tmp, "%s", s);
	ret = _strlen(tmp);
	for (i = 0; i < ret; i++)
		_putchar(tmp[i]);

	free(tmp);

	return (ret);
}

