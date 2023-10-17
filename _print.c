#include "main.h"


/**
 * int _printf_custom - that function supports formats
 * @va_list : start variable arguments lists
 * @counter: To keep number of characters
 *
 * Return : number of character printedd 
 */




int _printf_custom(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	int counter =0;
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
					format +=2;
					countinue;
					return 1;
				}
				else if (format[1] == 's')
				{
					char *str = va_arg(arg, char *);
					int y = 0;
					while (str[y] != '\0')
					{
						counter += print_char(str[y++]);
					}
					format++;
				}
				else if (format[1] == '%')
				{
					counter += print_char('%');
					format++;
				}
				else 
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
