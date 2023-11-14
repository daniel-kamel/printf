#include "main.h"

/**
 * handle_c - handles character specifier in _printf
 * @ap: variable list
 * Return: 1
*/
int handle_c(va_list ap)
{
	char insert_c;

	/*Get character to be inserted*/
	insert_c = va_arg(ap, int);

	/*print character*/
	return (_putchar(insert_c));
}
