#include "main.h"

/**
 * print_number - prints an integer, using only _putchar function
 *
 * @num: the integer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_number(int num)
{
	unsigned int number = num;
	static int printed_chars_count;

	if (num < 0)
	{
		_putchar('-');
		printed_chars_count++;
		number *= -1;
	}

	if (number / 10 > 0)
		print_number(number / 10);

	_putchar('0' + (number % 10));
	printed_chars_count++;

	return (printed_chars_count);
}
