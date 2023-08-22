#include "main.h"
#include <stdio.h>

int main(void)
{
	int len;
	int len2;
	 len = _printf("Let's try to printf a simple sentence.\n");
	 len2 = printf("Let's try to printf a simple sentence.\n");
	 _printf("Length:[%d, %i]\n", len, len);
	 printf("Length:[%d, %i]\n", len2, len2);
	len = _printf("Negative:[%d]\n", -762534);
	len2 = printf("Negative:[%d]\n", -762534);
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	 _printf("Character:[%c]\n", 'H');
	 printf("Character:[%c]\n", 'H');
	 _printf("String:[%s]\n", "I am a string !");
	 printf("String:[%s]\n", "I am a string !");

	 len = _printf(NULL);
	 len2 = printf("String:[%s]\n", NULL);

	_printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");

	len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");

	 len = _printf("Percent:[%%]\n");
	 len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	return (0);
}
