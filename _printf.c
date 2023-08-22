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
	int i, buffer_chars_count = 0, added_chars_count = 0;
	int (*print)(va_list, char *);
	va_list args;
	char *buffer, *buffer_ptr;

	buffer = malloc(sizeof(char) * 1024);
	if (format == NULL || buffer == NULL)
		return (-1);
	buffer_ptr = buffer;
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
				buffer += print_percent(args, buffer);
				buffer_chars_count++;
				continue;
			}
			added_chars_count = print(args, buffer);
			buffer += added_chars_count;
			buffer_chars_count += added_chars_count;
			i++;
		}
		else
		{
			*buffer = format[i];
			buffer++;
			buffer_chars_count++;
		}
	}
	*buffer = '\0';
	write(1, buffer_ptr, buffer_chars_count);
	va_end(args);
	free(buffer_ptr);
	return (buffer_chars_count);
}
