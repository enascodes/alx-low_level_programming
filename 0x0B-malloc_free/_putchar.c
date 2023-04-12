#include "main.h"

/**
 * _putchar - create putchar
 * @c: character
 * Return: result
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
