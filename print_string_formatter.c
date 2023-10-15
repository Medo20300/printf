#include "main.h"



/**
 * print_char - print a characters
 * @argument:avariable arguments lists
 * @write: write values from the file
 * Return: success when return 1.
 */


int print_char(va_list argument)
{
		int yes;
		yes = va_arg(argument, int);
		putchar(yes);
		return (1);
}

/**
 * print_string - prints agroup of the Strings
 * @argument:a variable argument list.
 * Return: Number of Characters printed (string lengths).
 */

int print_string(va_list argument)
{
	char *string;
	int length = 0;
	string = va_arg(argument, char*);
	do {
		length +=  putchar(*string);
		string++;
	}
	while (*string != '\0');
	return (length);
}

/**
 * print_percent - Refers To the printed teh percentage sign
 * 
 * Return: refers to the numbers of characters that printed
 */

int print_percent(int parames, ...)
{
	char *string; 
		int y;
	va_list args;
	va_start(args, parames);
		string = "%";
		do
		{
			if (va_arg(args, int) == *string)
			{
				write(1, string, 1);
			return (0);
		}
} 
		while (++y < parames);               
			return (0);
}

