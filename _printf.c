#include "main.h"
#include <stdarg.h>


int print_int_formatter(int n);

/**
 * int _printf_custom - that function supports formats
 * @va_list : start variable arguments lists
 * @counter: To keep number of characters
 *
 * Return : number of character printedd 
 */


int _printf_custom(const char *format, ...)
{
	char *str = NULL;
	int y = 0;
	int counter = 0;
	va_list args;
	va_start(args, format);
		
		

		while (*format != '\0')
		{
			if (*format == '%')
			{
				switch (format[1])
				{
					case 'd':
					case 'i':
						counter += print_int_formatter(va_arg(args, int));
						format += 2;
						break;
					case 'c':
						counter += print_char(va_arg(args, int));
						format += 2;
						break;
					case 's':
					
						str = va_arg(args, char *);
					if (str != NULL)
					{	
						while (str[y] != '\0')
						{
							counter += print_char(str[y++]);
						}
					}
						format++;
						break;
					case '%':
						counter += print_char('%');
						format++;
						break;
					default:
						counter += print_char(format[0]);
						format++;
						break;
				}
			}
			else 
			{
				counter += print_char(format[0]);
				format++;
			}
		}
			return (counter);
		}
