#include "main.h"
/**
 * printsmallhex - prints a number in lowercase hex
 * @n: number to hex
 * Return: number of characters printed
 */
int printsmallhex(unsigned int ui)
{
	int count = 0;
	char small[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
	
	if (ui > 15)
		printsmallhex(ui / 16);
	count += _putchar(small[ui % 16]);
	return (count);
}
