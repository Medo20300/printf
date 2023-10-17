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
			
			print_int_formatter(num);
			format += 2; 
		}
		else
		{
			putchar(*format);
		}
		format++;
		if (*format == '%' && format[1] == 'c')
		{
			char ch = va_arg(args, int);
			putchar(ch);
		}
		if (*format == '%' && format[1] == 's')
		{
			char *str = va_arg(args, char *);;
			puts(str);
		}
		if (*format == '%' && format[1] == '%')
		{
			putchar('%');

		}
	}

	va_end(args);
	return (0);
}
