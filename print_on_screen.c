#include <stdio.h>
#include <unistd.h>

/*
 * print_on_screen - writes buffer on standard output.
 * @fd: File descriptor
 * @buf: A pointer that points to a buffer
 * @size: Define the numbers of bytes to be written
 * @c: A char variable type
 * Return: No. of bytes written
 */
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
