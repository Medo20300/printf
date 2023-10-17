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


/*** prototypes for the print function ***/

int print_char(char buffer[], int flags, int width, int precision,
		int size);

int print_string(va_list arguments, char buffer[], int flags, int width, int precision,
		int size);
int print_percent(int parames, ...);

void print_int_formatter(int num, char *str);

int _printf(const char *, ...);

/*** print_handle_arguments.c****/
int handle(const char *, va_list);
int percent_handle(const char *, va_list, int *);


/*** printer **/

int print_string(va_list);
int print_integer(va_list);
int print_rot(va_list);
int print_octal(va_list);
int print_hexadecimal_upp(va_list);
int print_rev_string(va_list);
int print_char(va_list);
int print_binary(va_list);
int print_unsigned(va_list);
int print_hexadecimal_low(va_list);
int print_pointer(va_list);

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
