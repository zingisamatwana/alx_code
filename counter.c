#include <stdio.h>
#include "main.h"

/*
 * count - Counter the number of format specifier that exist.
 * @fmt: A pointer that points to an array of chars
 * Return: Counter
 */
int count(const char *fmt)
{
	int count;
	for (int i=0; fmt[i]!='\n'; i++)
	{
		char types[] = {'d', 'u', 's', 'c', 'i'};
		for (int j = 0; j < sizeof(types); j++)
		{
			if (fmt[i] =='%' && fmt[i+1] == types[j])
			{
				count++;
			}
		}
	}
	return (count);
}

/*
 * _strlen - Counts number of characters in a string literal.
 * @s: A pointer that points to a array of characters
 * Return: length of string literal
 */
int _strlen(const char *s)
{
	int len = 0;
	while( s[len] != '\0')
	{
		len++;
	}
	return (len);
}
