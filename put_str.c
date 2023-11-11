#include "main.h"
/**
 * put_str - function to print string
 * @s: string to print
 * Return: return number of chars printed
 */
int put_str(char *s)
{
	write(1, s, strlen(s));
	return (strlen(s));
}
