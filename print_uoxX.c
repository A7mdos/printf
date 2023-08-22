#include "main.h"
#include <limits.h>

/**
 * print_u - Prints an unsigned integer.
 *
 * @arg: A pointer to the unsigned integer to be printed.
 * @buffer: A character buffer to store the result in.
 *
 * Return: The number of characters stored in buffer.
 */
int print_u(va_list arg, char *buffer)
{
	unsigned int number, number_copy, number_half1, number_half2;
	int half1_digits_count = 1, half2_digits_count = 1;

	number = va_arg(arg, unsigned int);

	if (number <= INT_MAX)
	{
		arg -= sizeof(unsigned int);
		return(print_di(arg, buffer));
	}

	number_half1 = number / 10000;
	number_copy = number_half1;

	while ((number_copy / 10) > 0)
	{
		number_copy /= 10;
		half1_digits_count++;
	}
	buffer += half1_digits_count - 1;
	print_number(number_half1, buffer);

	number_half2 = number % 10000;
	number_copy = number_half2;

	while ((number_copy / 10) > 0)
	{
		number_copy /= 10;
		half2_digits_count++;
	}
	buffer += half2_digits_count;
	print_number(number_half2, buffer);

	return (half1_digits_count + half2_digits_count);
}
