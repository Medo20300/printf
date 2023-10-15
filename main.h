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

int print_char(va_list argument);

int print_string(va_list argument);
int print_percent(int parames, ...);

void print_int_formatter(int num, char *str);


#endif /* MAIN_H */
