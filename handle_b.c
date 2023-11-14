#include "main.h"

/**
 * handle_b -	prints unsigned in value passed from printf.
 * @ap:		va_list to pass arguments.
 * Return:	number of printed characters.
 */
int handle_b(va_list ap)
{
	char string[1024];
	int num;
	int i;

	num = va_arg(ap, int);

	itoa(num, string, 2);

	for (i = 0; string[i]; i++)
		_putchar(string[i]);

	return (i);
}
