#include "main.h"

int _strlen(char *s);

/**
 * print_rev - Prints a string, in reverse.
 *
 * @arg: A pointer to the string to be printed.
 * @buffer: A character buffer storing the overall string to print.
 *
 * Return: The number of characters stored to buffer.
 */
int print_rev(va_list arg, char *buffer)
{
	char *str;
	int i, printed_chars_count = 0, str_length;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		str = "(null)";
		for (i = 0; str[i] != '\0'; i++)
		{
			*buffer = str[i];
			buffer++;
		}
		return (6);
	}


	str_length = _strlen(str);
	for (i = str_length - 1; i >= 0; i--)
	{
		*buffer = str[i];
		buffer++;
		printed_chars_count++;
	}

	return (printed_chars_count);
}

/**
 * _strlen - calculates the length of a string
 *
 * @s: the string to get the length of
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0, length = 0;

	while (s[i++] != '\0')
		length++;

	return (length);
}