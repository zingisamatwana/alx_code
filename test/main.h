#ifndef _MAIN_
#define _MAIN_

/* + NULL, */
#include <stddef.h>
/* + write(), */
#include <unistd.h>
/* + malloc, */
#include <stdlib.h>
/* + variadic func macros */
#include <stdarg.h>

/* main printf */
int _printf(const char *format, ...);

/* writes char to stdout */
int _putchar(char);

/* writes number to stdout */
void print_int(int);

/* writes string to std out */
void print_string(char *);
#endif /* END MAIN */
