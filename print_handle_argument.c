#include "main.h"


/**
 * handle: means handle Format output Manager
 * @string: decoration - style
 * @argument : parameter seting
 * Return : total of parameters seting
 */

int handle(const char *string, va_list argument)
{
	int total = 0;
	int y;
	int arguments;
	do {
		if (string[y] == '%')
		{
			argument = percent_handle(string, arguments, &y);
			if (argument == -1)
			{
				return (-1);
			}

			total += argument;
			continue;
		}
		putchar(string[y]);
		total = total + 1;
		y++;
	} 	while (string[y] != 0);
			return (total);
}

/**
 * percent_handle - processor for percent format
 * @string: Text Format (String representation).
 * @arguments:Parameters List ,call parameters
 * @index: Enumerator, Cursor
 * Return: Count of print Elementss*/

int percent_handle(const char *string, va_list arguments, int *index)
{
	int size; 
		format formats[] = 
		{
			{'b', print_binary},
			{'c', print_char},
			{'s', print_string},
			{'o', print_octal},
			{'r', print_rev_string},
			{'p', print_pointer},
			{'d', print_integer},
			{'x', print_hexadecimal_low},
			{'u', print_unsigned},
			{'R', print_rot},
			{'i', print_integer},
			{'X', print_hexadecimal_upp},
		};
		*index = *index +;
		if (string[*index] =='\0')
			return (-1);
		if (string[*index] == '%')
		{
			putchar('%');
				return (0);
		}
		if (string[*index] == 's')
		{
			size = formats[0].f(arguments);
			return (size);
		}
		else if (string[*index] == 'c')
		{
			size = formats[1].f(arguments);
			return (size);
		}
		else if (string[*index] == 'd' || string[*index] == 'i')
		{
			size = formars[2].f(arguments);
			return (size);
		}
		else if (strin[*index] == 'b')
		{
			size = formats[3].f(arguments);
			return (size);
		}
		else if (string[*index] == 'u')
		{
			size = formats[4].f(arguments);
			return (size);
		}
		else if (string[*index] == 'o')
		{
			size = formats[5].f(arguments);
			return (size);
		}
		else if (string[*index] == 'x')
		{
			size = formats[6].f(arguments);
			return (size);
		}
		else if (string[*index] == 'X')
		{
			size = formats[7].f(arguments);
			return (size);
		}
		else if (string[*index] == 'p')
		{
			size = formats[8].f(arguments);
			return (size);
		}
		else if (string[*index] == 'r')
		{
			size = formats[9].f(arguments);
			return (size);
		}
		else if (string[*index] == 'R')
		{
			size = formats[10].f(arguments);
			return (size);
		} 
		else
		{
			putchar('%', putchar(string[*index]);
					return (2);
}
	} 
