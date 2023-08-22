#include "main.h"

/**
 * print_number - prints an integer.
 *
 * @num: the integer to be printed.
 * @buffer: A character buffer to store the integer.
 */
void print_number(int num, char *buffer)
{
	unsigned int number = num;

	if ((number / 10) > 0)
		print_number((number / 10), buffer - 1);

	*buffer = (number % 10) + '0';
}
