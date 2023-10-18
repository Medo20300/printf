#include <unistd.h>
/**
 * _putchar - write the char to stdout.
 * @c:the char To printed.
 *
 * Return:in this cases 1 .
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
