#ifndef MAIN_H
#define MAIN_H

#define UNUSED(x) (void)(x)

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);

int (*get_print_func(const char *chr))(va_list, char *);


int print_c(va_list arg, char *buffer);
int print_s(va_list arg, char *buffer);
int print_percent(va_list arg, char *buffer);
int print_di(va_list arg, char *buffer);
int print_b(va_list arg, char *buffer);

int print_u(va_list arg, char *buffer);
int print_o(va_list arg, char *buffer);
int print_x(va_list arg, char *buffer);
int print_X(va_list arg, char *buffer);

int print_rev(va_list arg, char *buffer);



void print_number(int num, char *buffer);



/**
 * struct Printer - A struct type defining a printer.
 *
 * @typeSpecifier: A pointer to a character representing a data type.
 * @print: A pointer to a function that prints
 *         a data type corresponding to typeSpecifier.
 */
struct Printer
{
	char *typeSpecifier;
	int (*print)(va_list arg, char *buffer);

};
typedef struct Printer Printer;


#endif
