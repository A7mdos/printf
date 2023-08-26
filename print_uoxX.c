#include "main.h"

/**
 * print_u - Prints an unsigned integer.
 *
 * @arg: A pointer to the unsigned integer to be printed.
 * @buffer: A character buffer to store the result in.
 *
 * Return: The number of characters stored in buffer.
 */
int print_u(va_list arg, Buffer *outputBuffer)
{
	unsigned int number;

	number = va_arg(arg, unsigned int);

	return (convert_ubase(outputBuffer, number, "0123456789"));
}


/**
 * print_o - Prints an unsigned integer in octal.
 *
 * @arg: A pointer to the unsigned integer to be printed.
 * @buffer: A character buffer to store the result in.
 *
 * Return: The number of characters stored in buffer.
 */
int print_o(va_list arg, Buffer *outputBuffer)
{
	unsigned int number;

	number = va_arg(arg, unsigned int);

	return (convert_ubase(outputBuffer, number, "01234567"));
}


/**
 * print_x - Prints an unsigned integer in hexadecimal using abcdef.
 *
 * @arg: A pointer to the unsigned integer to be printed.
 * @buffer: A character buffer to store the result in.
 *
 * Return: The number of characters stored in buffer.
 */
int print_x(va_list arg, Buffer *outputBuffer)
{
	unsigned int number;

	number = va_arg(arg, unsigned int);

	return (convert_ubase(outputBuffer, number, "0123456789abcdef"));
}


/**
 * print_X - Prints an unsigned integer in hexadecimal using ABCDEF.
 *
 * @arg: A pointer to the unsigned integer to be printed.
 * @buffer: A character buffer to store the result in.
 *
 * Return: The number of characters stored in buffer.
 */
int print_X(va_list arg, Buffer *outputBuffer)
{
	unsigned int number;

	number = va_arg(arg, unsigned int);

	return (convert_ubase(outputBuffer, number, "0123456789ABCDEF"));
}
