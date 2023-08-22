#include "main.h"

/**
 * print_number - prints an integer, using only _putchar function
 *
 * @num: the integer to be printed.
 * @buffer: A character buffer storing the overall string to print.
 *
 * Return: The number of characters printed.
 */
int print_number(int num, char *buffer)
{
	unsigned int number = num, printed_chars_count = 0;

	if (num < 0)
	{
		_putchar('-');
		printed_chars_count++;
		number = -number;
	}

	if ((number / 10) > 0)
	{
		printed_chars_count += print_number(number / 10, buffer);
	}

	_putchar((number % 10) + '0');
	printed_chars_count++;

	return (printed_chars_count);
}
