#include "main.h"
/**
 * printunsigned - prints an unsigned number
 * @n: number to print
 * Return: number of characters printed
 */
int printunsigned(unsigned int ui)
{
	int count = 0;

	if (ui > 9)
		printnumber(ui/ 10);
	count += _putchar((ui % 10) + '0');
	return (count);
}
