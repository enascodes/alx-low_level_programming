#include <stdio.h>
/**
 * main -  program that prints all the numbers of base 16 in lowercase
 * You can only use the putchar function
 * Return: 0
 */
int main(void)
{
int i;
char j;
for (i = 0 ; i < 10 ; i++)
{
putchar(i + '0');
}
for (j  = 'a' ; j <= 'f' ; j++)
{
putchar(j);
}


return (0);
}
