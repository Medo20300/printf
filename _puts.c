#include "main.h"

/**
 * _puts - Prints a string followed by a newline
 * @str: String to be printed
 *
 * Return: The length of the string
 */
int _puts(char *str)
{
	int i =0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}
