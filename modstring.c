#include "main.h"
/**
 * modstring - doestnt print characters which are <0 and < 32
 * or characters greater than or egual to 127
 * @str: string to traverse
 * Return: number of characters in str
 */
int modstring(char *str)
{
	int count = 0;

	while (*str)
	{
		if (*str >= 32 && *str < 127)
			count += _putchar(*str);
		else
		{
			count += _putchar('\\');
			count += _putchar('x');
			if (*str < 16)
				count += _putchar(0 + '0');
			count += printbighex(*str);
		}
		++str;
	}
	return (count);
}
