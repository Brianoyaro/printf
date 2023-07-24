#include "main.h"
/**
 * _strlen - finds length of a string
 * @str: string to find length
 * Return: length of str
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		++str;
	}
	return (len);
}
/**
 * reverse_string - prints a string in reverse order
 * @str: string to reverse
 * Return: number of characters printed
 */
int reverse_string(char *str)
{
	int len = _strlen(str);
	int i;
	int count = 0;

	for (i = len; i >= 0; --i)
		count += _putchar(str[i]);
	return (count);
}
