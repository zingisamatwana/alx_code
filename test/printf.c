#include "main.h"

/**
 * _printf - custom print function
 * @format: string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int flag;
	int count, i;
	va_list ap;

	i = 0;
	flag = 1;
	count = 0;
	if (format)
	{
		va_start(ap, format);
		while (format[i] != '\0')
		{
			if (format[i] == '%' && (format[i + 1] >= 'a' && format[i + 1] <=
						'z') )
			{
				switch (format[i + 1])
				{
				case 'd':
					print_int(va_arg(ap, int));
					i += 2;
					flag = 0;
					break;
				case 's':
					print_string(va_arg(ap, char *));
					i += 2;
					flag = 0;
				default:
					break;
				}
			}
			if (format && format[i] != '%')
				_putchar(format[i]);
			if (flag)
				i++;
			flag = 1;
		}
		count++;
		va_end(ap);
	}

	return (count);
}
