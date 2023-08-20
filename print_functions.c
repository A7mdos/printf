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
	{
		_putchar('$');
		exit(1);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		printed_chars_count++;
	}

	return (printed_chars_count);
}
