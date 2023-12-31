#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

int _printf(const char *format, ...);
int put_char(char c);
int put_str(char *s);
int counter(long int number);
void print_di(int n);
int cases(char c, va_list n);
void _putchar(char c);

#endif
