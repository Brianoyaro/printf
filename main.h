#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdint.h>
#include <stddef.h>
int printrot13(char *str);
int modstring(char *str);
int reverse_string(char *str);
int print_function(char c, va_list args);
int printnumber(int n);
int printbinary(unsigned int ui);
int _puts(char *str);
int _putchar(char ch);
int _printf(const char *format, ...);
int printsmallhex(unsigned int ui);
int printbighex(unsigned int ui);
int printoctal(int n);
int printunsigned(unsigned int ui);
int printpointer(uint64_t n);
#endif

