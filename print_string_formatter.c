#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * print_char - print a characters
 * @parametes: A pointer to avariable arguments lists
 * @output_buffer: Buffer array to handle prints
 * @format_flags: Calculate Activitye flags
 * @field_width:the minimum width of the printed data
 * @output_precision: Athe number of the decimal places to be printed data
 * @data_size: Size specifier - the size of the data to be print
 * Return: Number of characters print 
 */

int handle_write_char(char character, char *buffer, int flags,
		int width, int precision, int size)
{
	buffer = output_buffer;
	flags = format_flags;
	width = field_width;
	precision = output_precision;
	size = data_size;
	int chars_printed = 0;
	if (format_flags & F_MINUS)
	{
		chars_printed += write(1, &character, 1);
	} else
	{
		if (field_width > 1)
		{
			chars_printed += write(1, " ", field_width - 1);
		}
		chars_printed += write(1, &character, 1);
	}
	return (chars_printed);
}


int print_char(va_list parameters, char *output_buffer, int format_flags,
		int field_width, int output_precision, int data_size)
{
	char character = va_arg(parameters, int);
	int chars_printed = handle_write_char(character, output_buffer, format_flags,
			field_width, output_precision, data_size);
	
	return (chars_printed);
}

/**
 * print_string - prints aStrings
 * @parameters: Lists of argumentss pointer to a variable argument list 
 * 	this list contains the data to print.
 * @output_buffer: Buffer array to handle print poiter to Buffer to print
 * @format_flags: Set flags Control formattting the print data
 * @field_width: The minimun width of the data printed.
 * @output_precision: The Numbers of DeciMal Places
 * @data_size: The size oF the Data TO printed in byt(Size Specifier)
 * Return: Number of Characters printed
 */

int print_string(va_list parameters, char *buffer[], int flags, 
		int width, int precision, int size)
{
	buffer = output_buffer;
	flags = format_flags;
	width = field_width;
	precision = output_precision;
	size = data_size;
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	int output_string_length = 0, y;
	char *string = va_arg(parameters, char *);

		
		if (string == NULL)
		{
			string = "(null)";
		}
		output_string_length = strlen(string);

			if (output_precision < 0)
			{
				output_precision = output_string_length;
			}		

		if (field_width > output_string_length)
		{
			y = 0;
			do {
				if (format_flags & F_MINUS)
				{
					write(1, &string[y], 1);
				} else 
				{
					write(1, " ", 1);
				}
				y++;
			} while (y < field_width - output_string_length);

			if (format_flags & F_MINUS)
			{
				write(1, &string[output_string_length], strlen(string) - output_string_length);
			}
			return (field_width);
		}
		return write(1, string, output_precision);
}
/**
 * print_percent - Refers To the printed teh percentage sign
 * @parameters: refers to the lists of argument of data
 * @out_buffer: refers to the Buffer araay to HandlE printed
 * @format_flags: refers to calculated activity flags
 * @field_width: refers to the get width of all found data
 * @output_precision: Refers to the precisions specifier
 * @data_size: refers to the size of all data
 * ReTURN:refers to the numbers of characters that printed
 */

int print_percent(va_list parameters, char output_buffer[], int format_flags, int field_width,
		int output_precision, int data_size)
{
	UNUSED(parameters);
	UNSUED(output_buffer);
	UNUSED(field_width);
	UNUSED(format_flags);
	UNUSED(output_precision);
	UNUSED(data_size);
	return(write(1, "%%", 1));
}
