#include "main.h"

/**
 * handle_s -		assign string into buffer.
 * @ap:			va_list that has the arguments of printf.
 * @buffer:		buffer in which to save the final output.
 * Return:		nothing.
 */
void handle_s(va_list ap, char *buffer)
{
	char *str;
	int i;

	if (!buffer)
		exit(-1);

	str = va_arg(ap, char *);
	
	buffer = realloc(buffer, (strlen(buffer) + strlen(str)));

	for (i = 0; str[i]; i++)
		buffer[strlen(buffer) - 1] = str[i];
}
