#include "main.h"

/**
 * handle_per -	prints percent.
 * @ap:		passes arguments.
 * Return:	number of characters printed.
 */
int handle_per(va_list ap)
{
	(void)ap;

	return (_putchar('%'));
}

/**
 * handle_p -	prints address.
 * @ap:		variable list.
 * Return:	number of characters printed.
 */
int handle_p(va_list ap)
{
	unsigned long int num = va_arg(ap, unsigned long int);
	char str[16];

	if (!num)
		return (_puts("(nil)"));

	str[0] = '0';
	str[1] = 'x';

	itoa(num, (str + 2), 16);

	return (_puts(str));
}
