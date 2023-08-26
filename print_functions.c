#include "main.h"

/**
 * print_c - Prints a char.
 *
 * @arg: A pointer to the character to be printed.
 * @buffer: A character buffer storing the character to print.
 *
 * Return: The number of characters stored to buffer (Always 1).
 */
int print_c(va_list arg, Buffer *outputBuffer)
{
	char letter;

	letter = va_arg(arg, int);

	return (copy_to_buffer(outputBuffer, &letter, 1));
}


/**
 * print_s - Prints a string.
 *
 * @arg: A pointer to the string to be printed.
 * @buffer: A character buffer storing the overall string to print.
 *
 * Return: The number of characters stored to buffer.
 */
int print_s(va_list arg, Buffer *outputBuffer)
{
	char *str;
	int len = 0;

	str = va_arg(arg, char *);

	if (str == NULL)
		str = "(null)";

	while (str[len])
		len++;

	return (copy_to_buffer(outputBuffer, str, len));
}


/**
 * print_percent - Prints '%'.
 *
 * @arg: A pointer to the character to be printed.
 * @buffer: A character buffer storing '%'.
 *
 * Return: The number of characters stored to buffer. (Always 1).
 */
int print_percent(va_list arg, Buffer *outputBuffer)
{
	UNUSED(arg);

	char letter = '%';

	return (copy_to_buffer(outputBuffer, &letter, 1));
}

/**
 * print_di - Prints an integer.
 *
 * @arg: A pointer to the integer to be printed.
 * @buffer: A character buffer storing the overall string to print.
 *
 * Return: The number of characters stored to buffer.
 */
int print_di(va_list arg, Buffer *outputBuffer)
{
	int number, digits = 0;
	char negative = '-';

	number = va_arg(arg, int);

	if (number < 0)
		digits += copy_to_buffer(outputBuffer, &negative, 1);

	return (digits + convert_sbase(outputBuffer, number, "0123456789"));
}
