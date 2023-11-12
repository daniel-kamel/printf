#include "main.h"

/**
 * handle_d -	prints integer value passed from printf.
 * @ap:		va_list to pass arguments.
 * Return:	number of printed characters.
 */
int handle_d(va_list ap)
{
	char string[10];
	int num;
	int i;

	num = va_arg(ap, int);
	
	itoa(num, string, 10);

	for (i = 0; string[i]; i++)
		_putchar(string[i]);

	return (i);
}
