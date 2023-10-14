#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
/** flags  ***/

#define F_MINUS 1


/*** prototypes for the print function ***/

int print_char(char *buffer[], int flags, int width,
		int precision, int size);

int print_string(va_list parames, char *buffer[], int flags,
		int width, int precision, int size);

int print_percent(va_list parames, char buffer[], int flags,
		int width, int precision, int size);

void print_int_formatter(int num, char *str);


#endif /* MAIN_H */