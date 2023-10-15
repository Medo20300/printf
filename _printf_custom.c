#include "main.h"
#include <stdarg.h>

/**
 * _printf_custom - Custom printf function
 * @format: format specifier string
 *
 * Description:
 * A function that emulates the printf function.
 * It takes a format specifier string and some additional
 * arguments and prints the formatted output to the stdout.
 *
 * Return: The number of characters printed (excluding the null
 * used to end the output).
 */
int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%' && (format[1] == 'd' || format[1] == 'i'))
		{
			int num = va_arg(args, int);
			str[12];
			print_int_formatter(num, format);
			format++;
		}
		else
		{
			putchar(*format);
		}
		format++;
		if (*format == '%' && format[1] == 'c')
		{
			char ch = va_arg(args, int);
		}
		if (*format == '%' && format[1] == 's')
		{
			char *str = va_arg(args, char *);
		}
		if (*format == '%' && format[1] == '%')
		{

		}
	}

	va_end(args);
}
