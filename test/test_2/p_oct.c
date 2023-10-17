#include "main.h"

/**
 * p_oct - writes octa-decimal to stdout
 * @n: value to print
 *
 * Return: number of bytes printed
 */

int p_oct(int n)
{
	int ret, i;
	char *tmp;

	tmp = malloc(sizeof(char) * 64);
	if (!tmp)
		return (-1);
	sprintf(tmp, "%o", n);
	ret = _strlen(tmp);
	for (i = 0; i < ret; i++)
		_putchar(tmp[i]);
	free(tmp);

	return (ret);
}

