#include "main.h"
/**
 * printoctal: prints a number in octal
 * @n: number to print
 * Return: number of characters printed
 */
int printoctal(int n)
{
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		n *= -1;
	}
	if (n > 7)
		printoctal (n / 8);
	count += _putchar((n % 8) + '0');
	return (count);
}
