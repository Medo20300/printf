#ifndef MAIN_H
#define MAIN_H

int print_char(char c);

<<<<<<< HEAD
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

=======
int print_int_formatter(int num);

int _printf_custom(const char *, ...);

int _puts(cahr *str);
>>>>>>> 6227cf996cda2f98f202bbc4ab1c890fef3b7200

int _putchar(char c);
	
#endif /* MAIN_H */
