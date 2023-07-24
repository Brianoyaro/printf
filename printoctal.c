#include "main.h"
/**
 * printoctal: prints a number in octal
 * @n: number to print
 * Return: number of characters printed
 */
int printoctal(int n)
{
	int count;

	if (n < 0)
	{
		count += _putchar('-');
		n *= -1;
	}
	if (n > 7)
		printnumber ((n / 8));
	count += _putchar((n % 8) + '0');
	return (count);
}
