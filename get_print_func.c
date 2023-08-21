#include "main.h"

/**
 * get_print_func - Selects the correct print function
 *					corresponding to a given character.
 *
 * @chr_ptr: A pointer to the character used to select a function.
 *
 * Return: A pointer to the selected function.
 */
int (*get_print_func(const char *chr_ptr))(va_list)
{
	Printer printers[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
		{"d", print_d},
		{"i", print_i},
		{"b", print_b},
		{NULL, NULL}
	};
	int i = 0;

	while (printers[i].typeSpecifier != NULL)
	{
		if (*(printers[i].typeSpecifier) == *chr_ptr)
			return (printers[i].print);

		i++;
	}

	return (NULL);
}
