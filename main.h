#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdint.h>
int printrot13(char *str);
int modstring(char *str);
int reverse_string(char *str);
int print_function(char c, va_list args);
int printnumber(int n);
int printbinary(int n);
int _puts(char *str);
int _putchar(char ch);
int _printf(const char *format, ...);
int printsmallhex(int n);
int printbighex(int n);
int printoctal(int n);
int printunsigned(int n);
int printpointer(uint64_t n);
#endif

