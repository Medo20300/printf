#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <limits.h>
/** flags  ***/

#define F_MINUS 1
#define F_PLUSE 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/**Size **/ 
#define S_LONG 2
#define S_SHORT 1

/*** prototypes for the print function ***/

int print_char(char ch);

int print_string(va_list arguments);

int print_percent(int parames, ...);

int print_int_formatter(int num);

int _printf(const char *, ...);

int _printf_custom(const char *format, ...);
/**
 * struct_formats- struct
 * @type: struct formatss
 * @f: print formats
 */
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;


#endif /* MAIN_H */
