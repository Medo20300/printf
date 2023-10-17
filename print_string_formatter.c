#include "main.h"


/**
 * print_char - print a characters
 * @argument:avariable arguments lists
 * @write: write values from the file
 * Return: success when return 1.
 */

int print_char(char ch)
{
	return (putchar(ch));
}

/**
 * print_string - prints agroup of the Strings
 * @arguments:a variable argument list.
 *
 * Return: Number of Characters printed (string lengths).
 */

int print_string(va_list arguments)
{
	char *pointer;
int length_of_string;
pointer = va_arg(arguments, char*);
for (length_of_string = 0; pointer[length_of_string] != '\0'; length_of_string++)
{ 
	putchar(pointer[length_of_string]);
}
return (length_of_string);
}
				

/**
 * print_percent - Refers To the printed teh percentage sign
 * 
 * Return: refers to the numbers of characters that printed
 */

int print_percent(va_list args)
{
	char *string = (char *) '%';
	
	if (va_arg(args, int) == *string)
	{
		return (*string);
	}
	return (*string);
}
