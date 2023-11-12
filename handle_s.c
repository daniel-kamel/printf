#include "main.h"

/**
 * handle_s - handle string specifier in _printf
 * @ap: variable list
 * Return: Number of chars in string
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
