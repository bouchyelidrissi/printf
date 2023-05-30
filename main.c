#include "main.h"

/**
 * main -.....
 *
 * @void : .......
 *
 * Return: ....
 *
 */

int main(void)
<<<<<<< HEAD
	{
		int len = 0;
		int len2 = 0;
		unsigned int ui;
		void *addr = &addr;

		ui = (unsigned int)INT_MAX + 1024;
		_printf("Character:[%c]\n", 'H');
		printf("Character:[%c]\n", 'H');

		_printf("String:[%s]\n", "I am a string !");
		printf("String:[%s]\n", "I am a string !");


		len = _printf("Percent:[%%]\n");
		len2 = printf("Percent:[%%]\n");


		printf("Len:[%d]\n", len);
		printf("Len2:[%d]\n", len2);

		_printf("%d\n", -2147483648);
		_printf("%b\n", 98);

		_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
		_printf("Unsigned octal:[%o]\n", ui);

		_printf("Unsigned:[%u]\n", ui);
		_printf("%S\n", "Best\nSchool");


		_printf("Address:[%p]\n", addr);
		printf("Address:[%p]\n", addr);
		return (0);

	}
=======
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	return (0);
}
>>>>>>> bf844291584071c2564b22609b69c341ebad1d32
