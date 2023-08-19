#include "main.h"

/**
 * _printf - A recreation of the C standard library function, `printf`.
 *
 * @format: The string to print.
 *
 * Return: number of printed characters.
 */

int _printf(const char *format, ...)
{
	int i, printed_chars_count = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		_putchar(format[i]);
		printed_chars_count++;
	}


	return (printed_chars_count);
}
