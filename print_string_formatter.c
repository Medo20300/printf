#include "main.h"



/**
 * print_char - print a characters
 * @argument:avariable arguments lists
 * @write: write values from the file
 * Return: success when return 1.
 */


int print_char(char buffer[], int flags, int width, int precision, int size)
{
	int total_count = 0;
	int y = 0;
	do
	{
		char c = buffer[y];
		total_count += handle_write_char(c, buffer, flags, width, precision, size);
		y++;
	}
	while (y < size);
	return total_count;
}

/**
 * print_string - prints agroup of the Strings
 * @argument:a variable argument list.
 * Return: Number of Characters printed (string lengths).
 */

int print_string(va_list arguments, char buffer[], int flags, int width,
		int precision, int size)
{
	UNUSED(buffer);
	UNUSED(size);
int string_length= 0;
int y;
char *string = va_arg(arguments, char *);
if (string == NULL)
{
	string = "(null)";
if (precision >= 6)
	string = "     ";
}
do
{
	string_length++;
} while (string[string_length] != '\0');
if (precision >= 0 && precision < string_length)
	string_length = precision;
	switch (width > string_length)
{
	case 1:
		if (flags & F_MINUS)
		{
			write(1, &string[0], string_length);
			y = width - string_length;
			while (y > 0)
			{
				write(1, " ",1);
				y--;
			}
			return (width);
		}
		else
		{
			y = width - string_length;
			while (y > 0)
			{
				write(1, " ", 1);
				y--;
			}
			write(1, &string[0], string_length);
			return (width);
		}
		break;
	default:
		return (write(1, string, string_length));
}
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

