#include "main.h"

/**
 * convert_sbase - Converts a signed int to an inputted base and stores
 *                the result to a buffer contained in a struct.
 *
 * @outputBuffer: A Buffer struct containing a character array.
 * @number: A signed integer to be converted.
 * @base: A pointer to a string containing the base to convert to.
 *
 * Return: The number of bytes stored to the buffer.
 */
int convert_sbase(Buffer *outputBuffer, int number, char *base)
{
	char digit;
	int len = 0, bytes_count = 1;

	while (base[len])
		len++;

	if (number >= len || number <= -len)
		bytes_count += convert_sbase(outputBuffer, number / len, base);

	digit = base[(number < 0 ? -1 : 1) * (number % len)];
	_memcpy(outputBuffer, &digit, 1);

	return (bytes_count);
}

/**
 * convert_ubase - Converts an unsigned long int to an inputted base and
 *                 stores the result to a buffer contained in a struct.
 *
 * @outputBuffer: A Buffer struct containing a character array.
 * @number: An unsigned integer to be converted.
 * @base: A pointer to a string containing the base to convert to.
 *
 * Return: The number of bytes stored to the buffer.
 */
int convert_ubase(Buffer *outputBuffer, unsigned long int number, char *base)
{
	char digit;
	unsigned int len = 0, bytes_count = 1;

	while (base[len])
		len++;

	if (number >= len)
		bytes_count += convert_ubase(outputBuffer, number / len, base);

	digit = base[(number % len)];
	_memcpy(outputBuffer, &digit, 1);

	return (bytes_count);
}
