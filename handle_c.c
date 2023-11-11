#include "main.h"

/**
 * handle_c - handles character specifier in _printf
 * @ap: va_list from _printf
 * @buffer: buffer string to save character to
 * Return: void
*/
void handle_c(va_list ap, char *buffer)
{
	int buffer_index;
	char insert_c;

	if (!buffer)
		exit(-1);

	/*Get current buffer index*/
	buffer_index = strlen(buffer) - 1;
	/*Get character to be inserted*/
	insert_c = va_arg(ap, char);

	/*Expand buffer memory to accept character*/
	buffer = realloc(buffer, sizeof(buffer) + sizeof(char));
	/*Add character to buffer*/
	buffer[buffer_index] = insert_c;
}
