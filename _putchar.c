#include "main.h"

int buffer(char c);
/**
 * _putchar - write the char to stdout.
 * @c:the char To printed.
 *
 * Return:in this cases 1 .
 */

int _putchar(char c)
{
	return (buffer(c));
}

/**
 * buffer - keep the char in a buff
 * @c: that characters
 *
 * Return: 1
 */
int buffer(char c)
{
	static char buffering[1024];
	static int y;
if (c == -1)
{
	write(1, buffering, y);
y= 0;
}
 else if (y == 1024)
{
	write(1, buffering, y);
		y = 0;
} 
else 
{
	buffering[y++] = c;
}
return (1);
}
