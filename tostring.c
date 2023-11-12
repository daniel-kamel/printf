#include "main.h"

/**
 * tostring -	converts int to string.
 * @str:	string to save converted int.
 * @num:	integer to convert.
 * Return:	nothing.
 */
void tostring(char str[], int num)
{
	int i, rem, len = 0, n, flag = 1;

	n = num;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
		flag = 0;
	}

	for (i = 0; i < len; i++)
		{
			rem = num % 10;
			num = num / 10;
			str[len - (i + flag)] = rem + '0';
		}

	str[strlen(str)] = '\0';
}
