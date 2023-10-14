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


int print_char(char buffer[], int flags, int width, int precision, 
		int size)
{
	char character c;
	va_start(va_arg(NULL, va_list), NULL);
		c = va_arg(va_arg(NULL, va_list), int);
			va_end(va_arg(NULL, va_list));
	return (handle_write_char(c, buffer, flags, width, precision, size));
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
	char *string;
	va_start(parames, buffer);
	string = va_arg(parames, char *);
	va_end(parames);
	if (flags & F_MINUS)
	{
		do {
			write(1, " ", 1);
			output_length++;
		}
		while (output_length < width - strlen(string));
		write(1, string, strlen(string));
		return (width);
	} else 
	{
		write(1, string, strlen(string));
		do {
			write(1, " ",1);
			output_length++;
		}
		while (output_length < width - strlen(string));
		return (strlen(string));
	}
	return (write(1, string, strlen(string)));
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
	
	return(write(1, "%%", 1));
}
