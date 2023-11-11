#include "main.h"

/**
 * handle_per - handles percent sign specifier in _printf
 * @ap: va_list from _printf
 * @buffer: buffer string to save percent sign to
 * Return: void
*/
void handle_per(va_list ap, char *buffer)
{
	int buffer_index;

	if (!buffer)
		exit(-1);

	/*Get current buffer index*/
	buffer_index = strlen(buffer) - 1;

	/*Expand buffer memory to accept percent*/
	buffer = realloc(buffer, sizeof(buffer) + sizeof(char));
	/*Add percent to buffer*/
	buffer[buffer_index] = '%';
}
