#include "main.h"
/**
 * printbinary - prints a binary equivalent of a number
 * @n: number to change to binary
 * Return: number of characters in binary number
 */
int printbinary(int n)
{
	int count;

	if (n < 0)
	{
		count += _putchar('-');
		n *= -1;
	}
	if (n > 1)
		printnumber ((n / 2));
	count += _putchar((n % 2) + '0');
	return (count);
}
