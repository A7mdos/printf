#include "main.h"

/**
 * print_rot13 - Print a string, using rot13 encryption cipher.
 *
 * @arg: A pointer to the string to be printed.
 * @buffer: A character buffer storing the overall string to print.
 *
 * Return: The number of characters stored to buffer.
 */
int print_rot13(va_list arg, Buffer *outputBuffer)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *str, *null = "(null)";
	int i, j, str_len = 0;

	str = va_arg(arg, char *);
	if (str == NULL)
		return (copy_to_buffer(outputBuffer, null, 6));

	while (str[str_len])
		str_len++;

	for (i = 0; i < str_len; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (*(str + i) == *(alphabet + j))
			{
				copy_to_buffer(outputBuffer, (rot13 + j), 1);
				break;
			}
		}

		if (j == 52)
			copy_to_buffer(outputBuffer, (str + i), 1);
	}

	return (str_len);
}
