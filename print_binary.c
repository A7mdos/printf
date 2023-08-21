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
	int i = 0, count = 0;
	char binary[32];

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		binary[i] = (num % 2) + '0';
		num /= 2;
		i++;
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(binary[i]);
	}

	return (count);
}
