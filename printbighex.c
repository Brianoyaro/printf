#include "main.h"
/**
 * printbighex - prints a number in uppercase hexadecimal
 * @n: number to hex
 * Return: number of characters in hex number
 */
int printbighex(int n)
{
	int count = 0;

	char small[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	
	if (n < 0)
	{
		count += _putchar('-');
		n *= -1;
	}
	if (n > 15)
		printsmallhex(n / 16);
	count += _putchar(small[n % 16]);
	return (count);
}
