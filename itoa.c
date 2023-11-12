#include <stdbool.h>
#include "main.h"

/**
 * reverse - a utility function to reverse a string
 * @str: string to be reversed
 * @length: length of str
 * Return: void
 */
void reverse(char str[], int length)
{
	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		char temp = str[start];

		str[start] = str[end];
		str[end] = temp;
		end--;
		start++;
	}
}

/**
 * itoa - convert integer to string
 * @num: int to be converted
 * @str: string to store the result
 * @base: base of int num
 * Return: pointer to result string
*/
char *itoa(int num, char *str, int base)
{
	int i = 0;
	long l_num = num;
	bool isNegative = false;

	if (l_num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}

	if (l_num < 0 && base == 10)
	{
		isNegative = true;
		l_num = -l_num;
	}

	while (l_num != 0)
	{
		int rem = l_num % base;

		str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
		l_num = l_num / base;
	}

	if (isNegative)
	{
		str[i++] = '-';
	}
	str[i] = '\0';


	reverse(str, i);

	return (str);
}
