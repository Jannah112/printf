#include "main.h"
/**
 * print_di - function to print a number
 * @num: number to print
 */
void print_di(int num)
{
	unsigned int pn;

	if (num < 0)
	{
		pn = -num;
		putchar('-');
	}
	else
	{
		pn = num;
	}
	if (pn / 10)
		print_di(pn / 10);
	putchar((pn % 10) + '0');
}
