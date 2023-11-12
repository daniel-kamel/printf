#include "main.h"

/**
 * _printf - prints to stout
 * @format: format string
 * Return: number of printed characters
*/
int _printf(const char *format, ...)
{
	int i, j, length = 0;
	va_list ap;
	spec sp[NUM_SPEC] = 
	{
		{'c', handle_c},
		{'s', handle_s},
		{'%', handle_per}
	};

	if (!format)
		return (-1);

	va_start(ap, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			length += _putchar(format[i]);
		else
		{
			i++;

			for (j = 0; j < NUM_SPEC; j++)
			{
				if (sp[j].c == format[i])
				{
					length += sp[j].func(ap, length);
					break;
				}
			}
		}
	}

	va_end(ap);

	return length;
}
