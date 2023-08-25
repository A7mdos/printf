#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n1, n2;

	n1 = _printf("%s", "alo");
	_putchar('\n');
	n2 = _printf("%c", 'a');
	_putchar('\n');

	printf("Len:[%d]\n", n1);
	printf("Len:[%d]\n", n2);
	_putchar('\n');


	n1 = _printf("%s", NULL);
	_putchar('\n');
	n2 = _printf("%r%%%c", 'H');
	_putchar('\n');

	printf("Len:[%d]\n", n1);
	printf("Len:[%d]\n", n2);
	_putchar('\n');


	n1 = printf("%s", NULL);
	_putchar('\n');
	n2 = printf("%r%%%c", 'H');
	_putchar('\n');

	printf("Len:[%d]\n", n1);
	printf("Len:[%d]\n", n2);
	_putchar('\n');

	return (0);
}
