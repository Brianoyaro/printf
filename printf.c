#include "main.h"
int print_function(char c, va_list args);
/**
 * _printf - prints characters to stdout
 * @format: first argument in _printf function
 * Return: number of characters outputted
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			count += print_function(*(++format), args);
		}
		else
			count += _putchar(*format);
		++format;
	}
	va_end(args);
	return (count);
}
/**
 * print_function - selectes the cooresponding function
 * per format specifier
 * @c: character after format specifier
 * @va_list args: variable list of input parameters to _printf
 * Return: number of characters printed
 */
int print_function(char c, va_list args)
{
	unsigned int ui;
	void *m;
	int count = 0;
	char ch;
	char *str;
	int n;

	if (c == 'c')
	{
		ch = va_arg(args, int);
		count += _putchar(ch);
	}
	else if (c == 's')
	{
		str = va_arg(args, char *);
		count += _puts(str);
	}
	else if ((c == 'd')||(c == 'i' ))
	{
		n = va_arg(args, int);
		count += printnumber(n);
	}else if (c == 'x')
	{
		ui = va_arg(args, unsigned int);
		count += printsmallhex(ui);
	}
	else if (c == 'X')
	{
		ui = va_arg(args, unsigned int);
		count += printbighex(ui);
	}
	else if (c == 'b')
	{
		ui = va_arg(args,int);
		count += printbinary(ui);
	}
	else if (c == 'o')
	{
		n = va_arg(args, int);
		count += printoctal(n);
	}
	else if (c == 'u')
	{
		ui = va_arg(args, unsigned int);
		count += printunsigned(ui);
	}
	else if (c == 'p')
	{
		count += _putchar('0');
		count += _putchar('x');
		m = va_arg(args, void *);
		count += printpointer((uint64_t) m);
	}
	else if (c == '%')
		count += _putchar('%');
	else if ( c == 'r')
	{
		str = va_arg(args, char *);
		count += reverse_string(str);
	}
	else if (c == 'R')
	{
		str = va_arg(args, char*);
		count += printrot13(str);
	}
	else if (c == 'S')
	{
		str = va_arg(args, char *);
		count += modstring(str);
	}
	return (count);
}
