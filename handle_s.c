#include "main.h"

/**
 * handle_s -		assign string into buffer.
 * @ap:			va_list that has the arguments of printf.
 * @buffer:		buffer in which to save the final output.
 * Return:		nothing.
 */
void handle_s(va_list ap, char *buffer)
{
	char *str = va_arg(ap, char *);
	int i;

	if (!buffer)
		exit(-1);

	buffer = realloc(buffer, (sizeof(buffer) + sizeof(str)));
	for (i = 0; str[i]; i++)
		buffer[strlen(buffer) - 1] = str[i];
}
