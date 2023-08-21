#include "main.h"
#include <limits.h>

int print_binary(unsigned int num);


/**
 * print_b - Prints an unsigned int in binary format.
 *
 * @arg: A pointer to the unsigned int to be printed.
 *
 * Return: The number of characters (0s and 1s) printed.
 */

int print_b(va_list arg)
{
	unsigned int number;

	number = va_arg(arg, unsigned int);

	if (number == UINT_MAX)
	{
		return (_printf("11111111111111111111111111111111"));
	}

	return (print_binary(number));
}

/**
 * print_binary - prints an unsigned integer, using only _putchar function,
 *				  in binary format.
 *
 * @num: the unsigned int to be printed.
 *
 * Return: The number of characters (0s and 1s) printed.
 */
int print_binary(unsigned int num)
{
	static int printed_chars_count;

	if (num == 0 || num == 1)
	{
		if (printed_chars_count == 32)
			return (32);

		_putchar('0' + num);
		printed_chars_count++;
		return (1);
	}

	print_binary(num / 2);

	_putchar('0' + (num % 2));

	if (printed_chars_count == 32)
		return (32);

	printed_chars_count++;

	return (printed_chars_count);
}
