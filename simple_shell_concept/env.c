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
/*	int line_t, i, len_t, fd;
	char *path;

	line_t = 1;
	fd = open("variable.txt", O_WRONLY | O_CREAT, 0777);
	path = envp[21];
	len_t = strlen(envp[21]);
	for (i = 5; i < len_t; i++)
	{
		if (path[i] == ':')
		{
			i++;
			line_t++;
			write(fd, "\n", 1);
		}
		write(fd, &path[i], 1);
	}
	close(fd);
*/
	FILE *stream;
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;
	char *patharr[50];
	int c;

	c = 0;

	stream = fopen("variable.txt", "r");
	if (!stream)
	{
		perror("fopen");
		exit(EXIT_FAILURE);
	}
	while ((nread = getline(&line, &len, stream)) != EOF)
	{
		patharr[c] = strdup(line);
		c++;
	}
	fclose(stream);

	for (int i = 0; i < c; i++)
	{
		printf("%d: %s", i, patharr[i]);
	}
	printf("\n ----------------------------------------------------------------\n");

	for (int i = 0; i < c; i++)
	{
		char usr[3] = {'l','s','\0'};
		int pln = strlen(patharr[i]) - 1;
		int usrln = strlen(usr);

		char *arr = patharr[i];
		char s[pln + usrln + 2];
		if (arr[pln - 1] == '/')
		{
			int j;

		    for (j = 0; j < pln; j++)
			{
				s[j] = arr[j];
			}
			for (; j < pln + usrln; j++)
			{
				s[j] = usr[j - pln];
			}
			s[j] = '\0';
		}
		else
		{
			int j;

			for (j = 0; j < pln; j++)
			{
				s[j] = arr[j];
			}
			s[j] = '/';
			j++;
			printf("j: %d\tpln: %d\tusrln: %d\n", j, pln, usrln);
			for (; j < (pln + usrln + 1); j++)
			{
				s[j] = usr[j - pln - 1];
			}
			printf("j: %d\tpln: %d\tusrln: %d\n", j, pln, usrln);
			s[pln + usrln + 1] = '\0';
		}
		printf("%s\n", s);
	}

	exit(EXIT_SUCCESS);
}

