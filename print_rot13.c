#include "main.h"

/**
 * print_rot13 - Print a string, using rot13 encryption cipher.
 *
 * @arg: A pointer to the string to be printed.
 * @buffer: A character buffer storing the overall string to print.
 *
 * Return: The number of characters stored to buffer.
 */
int print_rot13(va_list arg, char *buffer)
{
	char *alphabet, *rot13, *str;
	int i, j, printed_chars_count = 0;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str = "(null)";
		for (i = 0; str[i] != '\0'; i++)
		{
			*buffer = str[i];
			buffer++;
		}
		return (6);
	}

	alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			*buffer++ = ' ';
			printed_chars_count++;
			continue;
		}
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (str[i] == alphabet[j])
			{
				*buffer++ = rot13[j];
				break;
			}

			if (alphabet[j] == 'Z')
				*buffer++ = str[i];
		}
		printed_chars_count++;
	}
	return (printed_chars_count);
}
