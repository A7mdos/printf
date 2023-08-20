#include "main.h"

/**
 * print_c - Prints a char.
 *
 * @arg: A pointer to the character to be printed.
 *
 * Return: The number of characters printed (Always 1).
 */
int print_c(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	_putchar(letter);

	return (1);
}


/**
 * print_s - Prints a string.
 *
 * @arg: A pointer to the string to be printed.
 *
 * Return: The number of characters printed.
 */
int print_s(va_list arg)
{
	char *str;
	int i, printed_chars_count = 0;

	str = va_arg(arg, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		printed_chars_count++;
	}

	return (printed_chars_count);
}


/**
 * print_percent - Prints '%'.
 *
 * @arg: A pointer to the character to be printed.
 *
 * Return: The number of characters printed (Always 1).
 */
int print_percent(va_list arg)
{
	UNUSED(arg);

	_putchar('%');

	return (1);
}

/**
 * print_d - Prints an integer.
 *
 * @arg: A pointer to the integer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_d(va_list arg)
{
	int d;

	d = va_arg(arg, int);

	return (print_number(d));
}

/**
 * print_i - Prints an integer.
 *
 * @arg: A pointer to the integer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_i(va_list arg)
{
	int i;

	i = va_arg(arg, int);

	return (print_number(i));
}
