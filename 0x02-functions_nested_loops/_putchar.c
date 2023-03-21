#include<unistd.h>

/**
 * main - print character
 * Return : Always 0
 */
int _putchar(char i)
{
	return(write(1, &i, 1));
}
