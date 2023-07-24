#include "main.h"
/**
 * _printf - prints formated output stdout
 * @format: argument passed
 * Return: number of characters in format
 */
int _printf(const char *format, ...)
{
	char ch;
	char * str;
	int count = 0;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			switch (*(++format))
			{
				case '%':
				{
					count += _putchar('%');
					break;
				}
				case 's':
				{
					str = va_arg(args, char*);
					count += _puts(str);
					break;
				}
				case 'c':
				{
					ch = va_arg(args, int);
					count += _putchar(ch);
					break;
				}
			}
		}
		else
		{
			_putchar(*format);
			count += 1;
		}
		++format;
	}
	va_end(args);
	return (count);
}
