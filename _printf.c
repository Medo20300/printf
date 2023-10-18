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
	/*char *str = NULL;*/
	/*int i;*/
	int counter = 0;
	va_list args;
	va_start(args, format);

		while (*format != '\0')
		{
			if (*format == '%')
			{
					if (format[1] == 'd' || format [1]== 'i')
					{
						int num = va_arg(args, int);
						counter += print_int_formatter(num);
						format ++;
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
						int i;
						if (str != NULL)
						{
							for (i = 0; str[i] != '\0'; i++)
							{
								counter += print_char(str[i]);
							}
						}
					}
					if (format[1] == '%')
					{
						counter += print_char('%');
						format++;
					}
					else
					{
						/*counter += print_char('%');*/
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
			/*format++;*/
		}
		va_end(args);
		return (counter);
}
