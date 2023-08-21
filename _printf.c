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
	int (*print)(va_list);
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == ' ' || format[i + 1] == '\0')
				return (-1);

			print = get_print_func(format + (i + 1));

			if (print == NULL)
			{
				_putchar('%');
				printed_chars_count++;
				continue;
			}

			printed_chars_count += print(args);
			i++;
		}
		else
		{
			_putchar(format[i]);
			printed_chars_count++;
		}
	}


	return (printed_chars_count);
}
