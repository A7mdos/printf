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
	 _printf("Hasan Zalago");
	 _putchar('\n');
	 _printf("Hassan %s", "Zalago");
	 _putchar('\n');
	 _printf("Hassan %c", 'Z');
	 _putchar('\n');
	 _printf("Hassan %c %s", 'Z', "zalago");
	 _putchar('\n');
	 _printf("Hassan%%%s", "Zalago");
	 _putchar('\n');
	 printf("Hassan%%%s", "Zalago");
	 _putchar('\n');
	 _printf("Hassan %%%%");
	 _putchar('\n');
	 printf("Hassan %%%%");
	 _putchar('\n');
	 n = printf("%s% ", NULL);
	 _putchar('\n');
	 printf("%d\n", n);

	 n = _printf("%r");
	 _putchar('\n');
	 printf("%d\n", n);
	 n = _printf("foo%r");
	 _putchar('\n');
	 printf("%d\n", n);
