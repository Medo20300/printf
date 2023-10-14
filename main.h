#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/** flags  ***/

#define F_MINUS 1


/*** prototypes for the print function ***/

int print_char(va_list parameters, char *output_buffer, int format_flags, int field_width,
		int output_precision, int data_size);

int print_string(va_list parameters, char *output_buffer[], int format_flags,
		int field_width, int output_precision, int data_size);

int print_percent(va_list parameters, char output_buffer[], int format_flags,
		int field_width, int output_precision, int data_size);

int handle_write_char(char character, char *output_buffer, int format_flags,
			int field_width, int output_precision, int data_size);


int handle_write_char(char character, char *output_buffer, int format_flags,
		int field_width, int output_precision, int data_size);

#endif /* MAIN_H */
