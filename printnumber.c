#include "main.h"
/**
 * printnumber - prints a number in base 10
 * @n: number to print
 * Return: number of characters printed
 */
int printnumber(int n)
{
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		count += _putchar('-');
		num = -n;
	}
	else
		num = n;
	if (num > 9)
		printnumber(num / 10);
	count += _putchar((num % 10) + '0');
	return (count);
}
