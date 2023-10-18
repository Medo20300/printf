#include "main.h"
#include <unistd.h>
#include <limits.h>
#include <stdio.h>
/**
 * print_int_formatter - Converts and int to string and prints it
 * with the formatter string.
 * @num: The number to be converted and printed
 * @str: An array of characters to store the string
 */
int print_int_formatter(int num)
{
	int buffer_index = 0;
	char buffer[1024];
	int i = 0, j, is_negative = 0;
	int len, total_len;
	char str[1024];

	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
	}

	if (num == INT_MIN)
	{
		str[i++] = '8';
		num = '-' + (num / 10);
	}

	if (num < 0 && num != INT_MIN)
	{
		is_negative = 1;
		num = -num;
	}

	while (num != 0)
	{
		int digit = num % 10;
		str[i++] = digit + '0';
		num /= 10;
	}

	if (is_negative)
		str[i++] = '-';

	str[i] = '\0';

	len = i;

	for (j = 0; j < len / 2; j++)
	{
		char temp = str[j];
		str[j] = str[len - j - 1];
		str[len - j - 1] = temp;
	}

	j = 0;
	

	while (str[j] != '\0')
	{
		buffer[buffer_index++] = str[j++];
	}
	buffer[buffer_index] = '\0';
	total_len = _puts(buffer);

	fflush(stdout);
	return (total_len);
}
