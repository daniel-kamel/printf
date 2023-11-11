#include "main.h"

/**
 * handle_per - handles percent sign specifier in _printf
 * @ap: va_list from _printf
 * @buffer: buffer string to save percent sign to
 * Return: void
*/
void handle_per(char *buffer)
{
	int buffer_index;

	if (!buffer)
		exit(-1);

	/*Get current buffer index*/
	buffer_index = strlen(buffer);

	/*Expand buffer memory to accept percent*/
	buffer = realloc(buffer, strlen(buffer) + sizeof(char) - 2);
	/*Add percent to buffer*/
	buffer[buffer_index] = '%';
}
