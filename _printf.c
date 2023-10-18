#include "main.h"
#include <stdarg.h>

/**
 * int _printf - that function supports formats
 * @format: The format to check
 *
 * Return : number of character printed
 */

int _printf(const char *format, ...)
{
	int counter = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
				if (format[1] == 'd' || format[1] == 'i')
				{
					int num = va_arg(args, int);

					counter += print_int_formatter(num);
					format++;
				}
				else if (format[1] == 'c')
				{
					char ch = va_arg(args, int);

					counter += print_char(ch);
					format += 2;
					continue;
					return (1);
				}
				else if (format[1] == 's')
				{
					char *str = va_arg(args, char *);

					int i = 0;

					while (str[i] != '\0')
					{
						counter += print_char(str[i++]);
					}
					format++;
				}
				else if (format[1] == '%')
				{
					counter += print_char('%');
					format++;
				}
				else
				{
					counter += print_char(format[0]);
					format++;
					continue;
				}
				format++;
		}
		else
		{
			counter += print_char(format[0]);
			format++;
		}
	}
	va_end(args);
	return (counter);
}
