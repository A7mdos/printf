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
	char letter;
	int (*print)(va_list);
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		letter = format[i];

		if (letter == '%')
		{
			print = get_print_func(format + ++i);

			if (print == NULL)
			{
				_printf("  Unlisted specifier");
				exit(1);
			}

			printed_chars_count += print(args);
		}
		else
		{
			_putchar(letter);
			printed_chars_count++;
		}
	}


	return (printed_chars_count);
}
