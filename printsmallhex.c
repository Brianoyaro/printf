#include "main.h"
/**
 * printsmallhex - prints a number in lowercase hex
 * @n: number to hex
 * Return: number of characters printed
 */
int printsmallhex(int n)
{
	int count = 0;

	char small[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
	
	/*if (n < 0)
	{
		count += _putchar('-');
		n *= -1;
	}*/
	if (n > 15)
		printsmallhex(n / 16);
	count += _putchar(small[n % 16]);
	return (count);
}
