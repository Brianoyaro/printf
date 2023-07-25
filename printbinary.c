#include "main.h"
/**
 * printbinary - prints a binary equivalent of a number
 * @n: number to change to binary
 * Return: number of characters in binary number
 */
int printbinary(unsigned int ui)
{
	int count = 0;

	if (ui > 1)
		printbinary(ui / 2);
	count += _putchar((ui % 2) + '0');
	return (count);
}
