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
int print_rot13(va_list list, char *buffer);



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


/**
 * struct Buffer - A struct type defining a buffer. Used to store characters
 *				   to be printed later.
 *
 * @start: A pointer to the start of the buffer.
 * @ptr: A pointer to a character in the buffer.
 * @length: The length of the string stored in the buffer.
 *
 * Description: @start: Should be set only once, when initializing the buffer.
 *				@ptr: Points to the memory area where the next char should
 *					  be stored.
 *						 Changes in the range: start --> start + 1024
 *				@length: If it approaches the maximum value (1024),
 *						 @ptr should be set back to @start
 */
struct Buffer
{
	char *start;
	char *ptr;
	int length;
};
typedef struct Buffer Buffer;


#endif
