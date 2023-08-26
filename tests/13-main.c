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

	n1 = _printf("abc");
	_putchar('\n');
	n2 = _printf("%r", NULL);
	_putchar('\n');

	printf("Len:[%d]\n", n1);
	printf("Len:[%d]\n", n2);
	_putchar('\n');


	// n1 = _printf("%");
	// _putchar('\n');
	// n2 = _printf("%%%%");
	// _putchar('\n');

	// printf("Len:[%d]\n", n1);
	// printf("Len:[%d]\n", n2);
	// _putchar('\n');


	// n1 = printf("%s", NULL);
	// _putchar('\n');
	// n2 = printf("%%%%c", 'H');
	// _putchar('\n');

	// printf("Len:[%d]\n", n1);
	// printf("Len:[%d]\n", n2);
	// _putchar('\n');

	return (0);
}
