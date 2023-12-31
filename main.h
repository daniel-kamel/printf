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
	int (*func)(va_list ap);
} spec;

/*Function prototypes*/
int handle_b(va_list ap);
int handle_c(va_list ap);
int handle_s(va_list ap);
int handle_d(va_list ap);
int handle_p(va_list ap);
int handle_per(va_list ap);
int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
void tostring(char str[], int num);
char *itoa(int num, char *str, int base);

#define NUM_SPEC 7

#endif
