#include "main.h"

/**
 * p_pointer - writes pointer to stdout
 * @p: value to print
 *
 * Return: number of bytes printed
 */

int p_pointer(void *p)
{
	int ret, i;
	char *tmp;

	tmp = malloc(sizeof(char) * 64);
	if (!tmp)
		return (-1);
	sprintf(tmp, "%p", p);
	ret = _strlen(tmp);
	for (i = 0; i < ret; i++)
		_putchar(tmp[i]);
	free(tmp);

	return (ret);
}
