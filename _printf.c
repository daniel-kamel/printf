#include "main.h"

/**
 * _printf - prints to stout
 * @format: format string
 * Return: number of printed characters
*/
int _printf(const char *format, ...)
{
	int i, j, length;
	char *buffer;
	va_list ap;
	spec sp[NUM_SPEC] = 
	{
		{'c', handle_c},
		{'s', handle_s},
	};

	if (!format)
		return (-1);

	va_start(ap, format);

	buffer = malloc(strlen(format) * sizeof(char));

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			buffer[strlen(buffer)] = format[i];
		else
		{
			i++;

			if (format[i] == '%')
				handle_per(buffer);
			else
			{
				for (j = 0; j < NUM_SPEC; j++)
				{
					if (sp[j].c == format[i])
					{
						sp[j].func(ap, buffer);
						break;
					}
				}
			}
		}
	}
	length = strlen(buffer);
	buffer[length] = '\0';

/*	write(1, buffer, length);
*/
	printf("%s", buffer);	
	va_end(ap);
	free(buffer);

	return length;
}
