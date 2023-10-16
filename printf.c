#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdarg.h>

/* _printf - A function that prints a formated string to standard output.
 * @format: A pointer to an array of chars
 * Return: No. of bytes printed
 */
int _printf(const char *format, ...)
{
	int nbs;
	int fd = 1;
	int i;
	char flag;
	va_list ap;
	int marker;

	flag = '%';
	va_start(ap, format); /* count - returns no. of specifiers fnd */
	for (i=0; format[i]!='\0'; i++)
	{
		int buffer[1024];
		int flag;
		char types[] = {'d', 'u', 's', 'c', 'i'};

		if (format[i] != flag)
		{
			buffer[i] = format[i];
			marker = 0;
		}
		else
		{
			marker = 1;
			nbs += print_on_screen(fd, buffer, sizeof(char)*(i+1),'s');
			for (int j = 0; j < sizeof(types); j++)
			{
				if (format[i] == flag && format[i+1] == types[j])
				{
					if (types[j] == types[0])
					{
						int num = va_arg(ap, int);
						nbs += print_on_screen(fd, &num ,sizeof(num), types[j]);
					}
					else if (types[j] == types[1])
					{
						unsigned int num = va_arg(ap, unsigned int);
						nbs += print_on_screen(fd, &num, sizeof(num),types[j]);
					}
					else if (types[j] == types[2])
					{
						const char *s = va_arg(ap, char *);
						nbs += print_on_screen(fd, &s, sizeof(_strlen(s)), types[j]);
					}
			        }
			}
			i += 2;
		}
	}
	va_end(ap);

	return (nbs);
}
