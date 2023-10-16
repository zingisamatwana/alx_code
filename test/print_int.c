#include "main.h"
/**
 * print_int - function to print integers
 * @n: integer
 */

void print_int(int n)
{
	int digit;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n / 10)
		print_int(n / 10);

	digit = (n % 10) + '0';
	write(1, &digit, 1);
}
