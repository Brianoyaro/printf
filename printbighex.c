#include "main.h"
/**
 * printbighex - prints a number in uppercase hexadecimal
 * @n: number to hex
 * Return: number of characters in hex number
 */
int printbighex(unsigned int ui)
{
	int count = 0;
	char small[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	
	if (ui > 15)
		printbighex(ui / 16);
	count += _putchar(small[ui % 16]);
	return (count);
}
