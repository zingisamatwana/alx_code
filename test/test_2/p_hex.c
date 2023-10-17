#include "main.h"

/**
 * p_hex - writes hexidecimal to stdout
 * @n: value to print
 *
 * Return: number of bytes printed
 */

int p_hex(int n)
{
	int ret, i;
	char *tmp;

	tmp = malloc(sizeof(char) * 20);
	if (!tmp)
		return (-1);
	sprintf(tmp, "%x", n);
	ret = _strlen(tmp);
	for (i = 0; i < ret; i++)
		_putchar(tmp[i]);

	free(tmp);

	return (ret);
}

/**
 * p_HEX - writes hexidecimal to stdout
 * @n: value to print
 *
 * Return: number of bytes printed
 */

int p_HEX(int n)
{
	int ret, i;
	char *tmp;

	tmp = malloc(sizeof(char) * 20);
	if (!tmp)
		return (-1);
	sprintf(tmp, "%X", n);
	ret = _strlen(tmp);
	for (i = 0; i < ret; i++)
		_putchar(tmp[i]);

	free(tmp);

	return (ret);
}
