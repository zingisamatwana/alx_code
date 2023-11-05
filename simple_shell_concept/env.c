#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
/**
 * main - print environment variables
 * @argc: argment count
 * @argv: argument vector
 * @envp: environment variable
 *
 * Return: 0 always.
 */
int main(int argc, char *argv[], char *envp[])
{
	int lines, i, len_t, fd;
	char *path;

	lines = 1;
	fd = open("variable.txt", O_WRONLY | O_CREAT, 0777);
	path = envp[21];
	len_t = strlen(envp[21]);
	for (i = 5; i < len_t; i++)
	{
		if (path[i] == ':')
		{
			i++;
			lines++;
			write(fd, "\n", 1);
		}
		write(fd, &path[i], 1);
	}
	close(fd);

	FILE *stream;
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;

	stream = fopen("variable.txt", "r");
	if (!stream)
	{
		perror("fopen");
		exit(EXIT_FAILURE);
	}
	while ((nread = getline(&line, &len, stream)) != EOF)
	{
		printf("Retrieved line of length %zu:\n", nread);
		char lines[nread + 3];
		strcpy(lines, line);
		lines[nread - 1] = '/';
		lines[nread ] = 'l';
		lines[nread + 1] = 's';
		lines[nread + 2] = '\n';
		lines[nread + 3] = '\0';
		fwrite(lines, nread + 3, 1, stdout);
	}
	fclose(stream);

	exit(EXIT_SUCCESS);
}
