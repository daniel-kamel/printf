#include "main.h"

/**
 * handle_s -		assign string into buffer.
 * Return:		nothing.
 */
int handle_s(va_list ap)
{
	char *str;
	int i;

	str = va_arg(ap, char *);
	
	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}
