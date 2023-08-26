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
	char chr;
	int (*print)(va_list, Buffer *);
	va_list args;
	Buffer *outputBuffer;

	outputBuffer = init_buffer();
	if (format == NULL || outputBuffer == NULL)
		return (-1);

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == ' ' || format[i + 1] == '\0')
			{
				printed_chars_count = -1;
				break;
			}
			print = get_print_func(format + (i + 1));
			if (print == NULL)
			{
				chr = '%';
				printed_chars_count += copy_to_buffer(outputBuffer, &chr, 1);
				continue;
			}
			printed_chars_count += print(args, outputBuffer);
			i++;
		}
		else
		{
			chr = format[i];
			printed_chars_count += copy_to_buffer(outputBuffer, &chr, 1);
		}
	}
	write(1, outputBuffer->start, outputBuffer->length);
	free_buffer(outputBuffer);
	va_end(args);
	return (printed_chars_count);
}
