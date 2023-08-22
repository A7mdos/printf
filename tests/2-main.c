#include "main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int len;
	int len2;

	len = _printf("%b", 1023);
	_putchar('\n');
    len2 = _printf("%b", UINT_MAX - 1);
	_putchar('\n');

	 len = _printf("Percent:[%%]\n");
     len2 = printf("Percent:[%%]\n");

	 len = _printf("Percent:[%%]\n");
	 len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	return (0);
}
