#include "main.h"

/**
 * print_rev - Prints a string, in reverse, into a buffer.
 *
 * @arg: A pointer to the string to be printed.
 * @outputBuffer: A Buffer struct containing a char array.
 *
 * Return: The number of characters stored to the buffer.
 */
int print_rev(va_list arg, Buffer *outputBuffer)
{
	char *str;
	char chr;
	int i, printed_chars_count = 0, str_length = 0;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		str = "(null)";
		return (copy_to_buffer(outputBuffer, str, 6));
	}

	while (str[str_length] != '\0')
		str_length++;

	for (i = str_length - 1; i >= 0; i--)
	{
		chr = str[i];
		printed_chars_count += copy_to_buffer(outputBuffer, &chr, 1);
	}

	return (printed_chars_count);
}
