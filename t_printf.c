#include <stdio.h>
#include <unistd.h>

int print_on_screen(int fd, void *buf, unsigned int size, char c)
{
	int n;
	int i;
	char types[] = {'d','u','s', 'c'};
	if (c == types[0])
	{
		int *buf_t = (int *)buf;
		write(fd, buf_t, size);
	}
	else if (c == types[1])
	{
		char *buf_t = (char *)buf;
		write(fd, buf_t, size);
	}
	else if (c == types[2])
	{
		char *buf_t = (char *)buf;
		n = write(fd, buf_t, size);
	}
	else if (c == types[3])
	{
		char *buf_t = (char *)buf;
		write(fd, buf_t, size);
	}

	return n;
}


int count(const char *fmt)
{
	int count;
	for (int i=0; fmt[i]!='\n'; i++)
	{
		char types[] = {'d', 'u', 's', 'c', 'i'};
		for (int j = 0; j < sizeof(types); j++)
		{
			if (fmt[i] =='%' && fmt[i+1] = types[j])
			{
				count++;
			}
		}
	}
	return (count);
}
int _strlen(const char *s)
{
	int len = 0;
	while( s[len] != '\0')
	{
		len++;
	}
	return (len);
}

int _printf(const char *format, ...)
{
	int nbs;
	int fd = 1;
	int i;
	char flag;
	va_list ap;
	int marker;

	flag = '%';
	va_start(ap, count(format)); /* count - returns no. of specifiers fnd */
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
			nbs += print_on_screen(fd, buffer, sizeof(char)*(i+1),\
					       's');
			for (int j = 0; j < sizeof(types); j++)
			{
				if (format[i] = flag && format[i+1] = types[j])
				{
					if (types[j] == types[0])
					{
						int num = va_arg(ap, int);
						nbs += print_on_screen(fd, &num
								       ,sizeof\
								       (num),\
								types[j]);
					}
					else if (types[j] = types[1])
					{
						unsigned int num = va_arg(ap,\
									  unsig\
									  ned\
									  int);
						nbs += print_on_screen(fd,\
								       &num,\
								sizeof(num),\
								types[j]);
					}
					else if (types[j] == types[2])
					{
						const char *s = va_arg(ap,\
								       char *);
						nbs += print_on_screen(fd, s,
								       sizeof(\
								  _strlen(s)),\
								types[j]);
					}
			        }
			}
		}
	}
	va_end(ap);

	return (nbs);
}
