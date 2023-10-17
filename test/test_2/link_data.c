#include "main.h"
/**
 * link_data - sends data to be printed
 * @c: character to check
 * @ap: argument pointer
 *
 * Return: number of byte printed
 */

int link_data(char c, va_list ap)
{
	int count;

	count = 0;
	switch (c)
	{
	case 'd':
		count += p_int(va_arg(ap, int));
		break;
	case 's':
		count += p_string(va_arg(ap, char *));
		break;
	case 'c':
		count += _putchar(va_arg(ap, int));
		break;
	case 'f':
		count += p_float(va_arg(ap, double));
		break;
	case 'u':
		count += p_uint(va_arg(ap, unsigned int));
		break;
	case 'i':
		count += p_uint(va_arg(ap, unsigned int));
		break;
	case 'x':
		count += p_hex(va_arg(ap, int));
		break;
	case 'o':
		count += p_oct(va_arg(ap, int));
		break;
	case 'p':
		count += p_pointer(va_arg(ap, void *));
		break;
	default:
		_putchar('%');
		_putchar(c);
		count += 2;
		break;
	}

	return (count);
}
