#ifndef MAIN


#define MAIN

/*Helper files to include*/
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct specifier - helps handles sepcifiers in _printf
 * @c: specifier character provided in format string
 * @func: function corresponding to specifier
 * Description: determines the function that adds the
 * corresponding argument in _printf function to the
 * buffer string
*/
typedef struct specifier
{
	char c;
	void (*func)(va_list ap, char *buffer);
};

/*Function prototypes*/
void handle_c(va_list ap, char *buffer);

#endif
