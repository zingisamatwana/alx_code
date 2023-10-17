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
/* + sprintf */
#include <stdio.h>

/**
 * u_int - Typedef for unsigned int
 */
typedef unsigned int u_int;

/* calculates the length of a string */
int _strlen(char *);

/* main printf */
int _printf(const char *format, ...);

/* writes char to stdout */
int _putchar(char);

/* writes number to stdout */
int p_int(int);

/* writes string to std out */
int p_string(char *);

/* writes float to stdout */
int p_float(double);

/* writes u_int to stdout */
int p_uint(u_int);

/* writes hex to stdout */
int p_hex(int);

/* writes hex to stdout */
int p_HEX(int);

/* writes pointer to stdout */
int p_pointer(void *);

/* writes oct decimal to stdout*/
int p_oct(int);

/* links argument data to printing functions */
int link_data(char c, va_list ap);

#endif /* END MAIN */
