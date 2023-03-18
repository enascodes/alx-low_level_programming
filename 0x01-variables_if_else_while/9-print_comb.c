#include <stdio.h>

/**
 * main -  program that prints all possible combinations of single-digit
 * Numbers must be separated by ,followed by a space
 * Numbers should be printed in ascending order
 * You can only use the putchar function
 * Return: 0
 */


int main(void)
{
int i;
for (i = 0 ; i < 10 ; i++)
{
if (i != 9)
{
putchar(i + '0');
putchar(',');
putchar(' ');
}
else if (i == 9)
putchar(i + '0');
putchar(' ');
}
return (0);
}
