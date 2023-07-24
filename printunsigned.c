#include "main.h"
/**
 * printunsigned - prints an unsigned number
 * @n: number to print
 * Return: number of characters printed
 */
int printunsigned(int n)
{
	int count;

	if (n > 9)
		printnumber (n / 10);
	count += _putchar((n % 10) + '0');
	return (count);
}
