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

	if (!buffer)
		exit(-1);

	str = va_arg(ap, char *);
	
	buffer = realloc(buffer, (strlen(buffer) + strlen(str)) * sizeof(char) - 2);

	strcat(buffer, str);
	printf("length: %lu\n", strlen(buffer));
}
