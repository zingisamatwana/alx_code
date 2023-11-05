#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *lineptr = NULL;
	size_t n = 0;

	printf("$ ");
	while (getline(&lineptr, &n, stdin) != EOF)
	{
		int length = strlen(lineptr);
		lineptr[length - 1] = '\0';
		printf("%s\n", lineptr);
		printf("$ ");
	}
	putchar(10);

	free(lineptr);
	exit(EXIT_SUCCESS);
}
