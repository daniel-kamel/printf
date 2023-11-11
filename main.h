#ifndef MAIN


#define MAIN

/*Helper files to include*/
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

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
}spec;

/*Function prototypes*/
void handle_c(va_list ap, char *buffer);
void handle_per(char *buffer);
void handle_s(va_list ap, char *buffer);
int _printf(const char *format, ...);

#define NUM_SPEC 2

#endif
