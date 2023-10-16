#include "main.h"
/**
 * print_string - writes string arg to stdout
 * @str: string to write
 */

void print_string(char *str)
{
	if (*str == '\0')
		return;
	_putchar(*str);
	print_string(++str);
}
