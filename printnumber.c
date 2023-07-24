#include "main.h"
/**
 * printnumber - prints a number in base 10
 * @n: number to print
 * Return: number of characters printed
 */
int printnumber(int n)
{
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		n *= -1;
	}
	if (n > 9)
		printnumber (n / 10);
	count += _putchar((n % 10) + '0');
	return (count);
}
