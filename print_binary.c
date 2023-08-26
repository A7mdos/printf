#include "main.h"
#include <limits.h>


/**
 * print_b - Prints an unsigned int in binary format.
 *
 * @arg: A pointer to the unsigned int to be printed.
 * @outputBuffer: A character buffer to store the binary number.
 *
 * Return: The number of characters (0s and 1s) stored to buffer.
 */

int print_b(va_list arg, Buffer *outputBuffer)
{
	unsigned int number;

	number = va_arg(arg, unsigned int);

	return (convert_ubase(outputBuffer, number, "01"));
}
