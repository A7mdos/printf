#include "main.h"

/**
 * print_c - Prints a char.
 *
 * @arg: A pointer to the character to be printed.
 * @buffer: A character buffer storing the character to print.
 *
 * Return: The number of characters printed (Always 1).
 */
int print_c(va_list arg, char *buffer)
{
	char letter;

	letter = va_arg(arg, int);
	*buffer = letter;

	return (1);
}


/**
 * print_s - Prints a string.
 *
 * @arg: A pointer to the string to be printed.
 * @buffer: A character buffer storing the overall string to print.
 *
 * Return: The number of characters printed.
 */
int print_s(va_list arg, char *buffer)
{
	char *str;
	int i, printed_chars_count = 0;

	str = va_arg(arg, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		*buffer = str[i];
		buffer++;
		printed_chars_count++;
	}

	return (printed_chars_count);
}


/**
 * print_percent - Prints '%'.
 *
 * @arg: A pointer to the character to be printed.
 * @buffer: A character buffer storing '%'.
 *
 * Return: The number of characters printed (Always 1).
 */
int print_percent(va_list arg, char *buffer)
{
	UNUSED(arg);

	*buffer = '%';

	return (1);
}

/**
 * print_d - Prints an integer.
 *
 * @arg: A pointer to the integer to be printed.
 * @buffer: A character buffer storing the overall string to print.
 *
 * Return: The number of characters printed.
 */
int print_d(va_list arg, char *buffer)
{
	int d;

	d = va_arg(arg, int);

	return (print_number(d, buffer));
}

/**
 * print_i - Prints an integer.
 *
 * @arg: A pointer to the integer to be printed.
 * @buffer: A character buffer storing the overall string to print.
 *
 * Return: The number of characters printed.
 */
int print_i(va_list arg, char *buffer)
{
	int i;

	i = va_arg(arg, int);

	return (print_number(i, buffer));
}
