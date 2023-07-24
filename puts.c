#include "main.h"
/**
 * _puts - prints a string in stdout
 * @str: string to print
 * Return: number of characters printed
 */
int _puts(char *str)
{
	int count = 0;

	while (*str)
	{
		_putchar(*str);
		count += 1;
		++str;
	}
	return (count);
}
