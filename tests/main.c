#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = _printf("% %salo", NULL);
	_putchar('\n');
	_printf("%d\n", n);
	_putchar('\n');


	n = _printf("%%");
	_putchar('\n');
	_printf("%d\n", n);
	_putchar('\n');

	n = _printf("alo%");
	_putchar('\n');
	_printf("%d\n", n);
	_putchar('\n');

	n = _printf("alo% ");
	_putchar('\n');
	_printf("%d\n", n);
	_putchar('\n');


	return (0);
}
