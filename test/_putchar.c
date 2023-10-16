#include "main.h"
/**
 * _putchar - writes char to stdout
 * @c: char to write
 *
 * Return: bytes written
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

