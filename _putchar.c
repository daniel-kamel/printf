#include <unistd.h>
/**
 * _puts -	uses _putchar on a string 
 * @str:	the string to print.
 * Return:	nothing.
 */
int _puts(char *str)
{
	char *orig = str;
	
	while (*str)
		_putchar(*str++);
	return (str - orig);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	static int i;
	static char buffer[1024];

	if (c == -1 || i >= 1024)
	{
		write(1, buffer, i);
		i = 0;
	}
	if (c != -1)
		buffer[i++] = c;
	return (-1);
}
