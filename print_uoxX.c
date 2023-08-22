#include "main.h"

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

	number_half1 = number / 10000;
	number_copy = number_half1;

	while ((number_copy / 10) > 0)
	{
		half1_digits_count++;
		number_copy /= 10;
	}
	buffer += half1_digits_count - 1;
	print_number(number_half1, buffer);

	number_half2 = number % 10000;
	number_copy = number_half2;

	while ((number_copy / 10) > 0)
	{
		half2_digits_count++;
		number_copy /= 10;
	}
	buffer += half2_digits_count;
	print_number(number_half2, buffer);

	return (half1_digits_count + half2_digits_count);
}


/**
 * print_o - Prints an unsigned integer in octal.
 *
 * @arg: A pointer to the unsigned integer to be printed.
 * @buffer: A character buffer to store the result in.
 *
 * Return: The number of characters stored in buffer.
 */
int print_o(va_list arg, char *buffer)
{
	unsigned int number, number_copy, digits_count = 1;

	number = va_arg(arg, unsigned int);
	number_copy = number;

	while (number_copy / 8)
	{
		number_copy /= 8;
		digits_count++;
	}

	buffer += digits_count - 1;

	while (number / 8)
	{
		*buffer = (number % 8) + '0';
		buffer--;
		number /= 8;
	}

	*buffer = (number % 8) + '0';

	return (digits_count);
}


/**
 * print_x - Prints an unsigned integer in hexadecimal using abcdef.
 *
 * @arg: A pointer to the unsigned integer to be printed.
 * @buffer: A character buffer to store the result in.
 *
 * Return: The number of characters stored in buffer.
 */
int print_x(va_list arg, char *buffer)
{
	unsigned int number, number_copy, digits_count = 1;

	number = va_arg(arg, unsigned int);
	number_copy = number;

	while (number_copy / 16)
	{
		number_copy /= 16;
		digits_count++;
	}

	buffer += digits_count - 1;

	while (number / 16)
	{
		if ((number % 16) < 10)
			*buffer = (number % 16) + 48;
		else
			*buffer = (number % 16) + 87;

		buffer--;
		number /= 16;
	}

	if ((number % 16) <  10)
		*buffer = (number % 16) + 48;
	else
		*buffer = (number % 16) + 87;

	return (digits_count);
}


/**
 * print_X - Prints an unsigned integer in hexadecimal using ABCDEF.
 *
 * @arg: A pointer to the unsigned integer to be printed.
 * @buffer: A character buffer to store the result in.
 *
 * Return: The number of characters stored in buffer.
 */
int print_X(va_list arg, char *buffer)
{
	unsigned int number, number_copy, digits_count = 1;

	number = va_arg(arg, unsigned int);
	number_copy = number;

	while (number_copy / 16)
	{
		digits_count++;
		number_copy /= 16;
	}

	buffer += digits_count - 1;

	while (number / 16)
	{
		if ((number % 16) < 10)
			*buffer = (number % 16) + 48;
		else
			*buffer = (number % 16) + 55;

		buffer--;
		number /= 16;
	}

	if ((number % 16) <  10)
		*buffer = (number % 16) + 48;
	else
		*buffer = (number % 16) + 55;

	return (digits_count);
}
