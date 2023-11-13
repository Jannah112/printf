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
int counter(int number);
void _putchar(char c);
void print_number(int n);

#endif
