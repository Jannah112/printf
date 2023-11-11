#include "main.h"

/**
 * put_char - a function that prints a character.
 * @c: character to be printed.
 *
 * Return: 1 Success.
*/
int put_char(char c)
{
	write(1, &c, 1);
	return (1);
}
