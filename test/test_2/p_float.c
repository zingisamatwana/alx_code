#include "main.h"

/**
 * p_float - writes float to stdout
 * @n: value to print
 *
 * Return: number of bytes printed
 */

int p_float(double n)
{
	int ret, i;
	char *tmp;

	tmp = malloc(sizeof(char) * 20);
	if (!tmp)
		return (-1);
	sprintf(tmp, "%f", n);
	ret = _strlen(tmp);
	for (i = 0; i < ret; i++)
		_putchar(tmp[i]);
	free(tmp);

	return (ret);
}

