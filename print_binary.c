#include "main.h"
#include <limits.h>


/**
 * print_b - Prints an unsigned int in binary format.
 *
 * @arg: A pointer to the unsigned int to be printed.
 * @buffer: A character buffer to store the binary number.
 *
 * Return: The number of characters (0s and 1s) stored to buffer.
 */

int print_b(va_list arg, char *buffer)
{
	unsigned int number, number_copy, digits = 1;

	number = va_arg(arg, unsigned int);
	number_copy = number;

	while (number_copy / 2)
	{
		number_copy /= 2;
		digits++;
	}

	buffer += digits - 1;

	while (number / 2)
	{
		*buffer = (number % 2) + '0';
		buffer--;
		number /= 2;
	}

	*buffer = (number % 2) + '0';

	return (digits);
}
