#ifndef MAIN_H
#define MAIN_H

#define UNUSED(x) (void)(x)

#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);

int (*get_print_func(const char *chr))(va_list);
int print_c(va_list arg);
int print_s(va_list arg);
int print_percent(va_list arg);



/**
 * struct Printer - A struct type defining a printer.
 *
 * @typeSpecifier: A pointer to a character representing a data type.
 * @print: A function pointer to a function that prints
 *         a data type corresponding to typeSpecifier.
 */
struct Printer
{
	char *typeSpecifier;
	int (*print)(va_list arg);

};
typedef struct Printer Printer;


#endif
