#include "main.h"

/**
 * print_c - Prints a char.
 *
 * @arg: A pointer to the character to be printed.
 * @buffer: A character buffer storing the character to print.
 *
 * Return: The number of characters stored to buffer (Always 1).
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
 * Return: The number of characters stored to buffer.
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
 * Return: The number of characters stored to buffer. (Always 1).
 */
int print_percent(va_list arg, char *buffer)
{
	UNUSED(arg);

	*buffer = '%';

	return (1);
}

/**
 * print_di - Prints an integer.
 *
 * @arg: A pointer to the integer to be printed.
 * @buffer: A character buffer storing the overall string to print.
 *
 * Return: The number of characters stored to buffer.
 */
int print_di(va_list arg, char *buffer)
{
	int num, num_copy, digits = 1;

	num = va_arg(arg, int);

	if (num < 0)
	{
		*buffer = '-';
		digits++;

		if (num == -2147483648)
		{
			*(buffer + 1) = '2';
			digits++;
			num = 147483648;
		}
		else
			num = -num;
	}

	num_copy = num;

	while ((num_copy / 10) > 0)
	{
		num_copy /= 10;
		digits++;
	}

	buffer += digits - 1;
	print_number(num, buffer);

	return (digits);
}
