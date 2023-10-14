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


int print_char(va_list parames, char *buffer[], int format_flags,
		int field_width, int output_precision, int data_size)
{
	buffer = output_buffer;
	flags = format_flags;
	width = field_width;
	precision = output_precision;
	size = data_size;

	char character = va_arg(parameters, int);
	int chars_printed = handle_write_char(character, buffer, flags,
				width, precision, size);
	
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

int print_string(va_list parames, char buffer[], int flags, 
		int width, int precision, int size)
{
	int output_length = 0;
	int = y;
	char *string = va_arg(parames, char *);
	buffer = output_buffer;
	flags = format_flags;
	width = field_width;
	precision = output_precision;
	size = data_size;
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(size);
if (string == NULL)
{
	string = "(null)";
	if (precision >= 6)
		string = "    ";
}
y = string[0];
do {
	output_length++;
	y = string[output_length];
} while (y != '\0');
if (precision >= 0)
	output_length = min(precision, output_length);
	if (field_width > output_length)
{
	if (flags & F_MINUS)
	{
		wriete(1, &string[0], output_length);
		for (y = field_width - output_length; y > 0; y--)
			write(1, " ", 1);
		return (field_width);
	}
	else
	{
		for (y = field_width - output_length; y > 0; y--)
			write(1, " ", 1);
		write(1 &string[0], output_length);
		return (field_width);
	}
}
return (write(1, string, output_length));
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

int print_percent(va_list parames, char buffer[], int flags, int width,
		int precision, int size)
{
	buffer = output_buffer;
	flags = format_flags;
	width = field_width;
	precision = output_precision;
	size = data_size;
	UNUSED(parameters);
	UNSUED(output_buffer);
	UNUSED(field_width);
	UNUSED(format_flags);
	UNUSED(output_precision);
	UNUSED(data_size);
	return(write(1, "%%", 1));
}
