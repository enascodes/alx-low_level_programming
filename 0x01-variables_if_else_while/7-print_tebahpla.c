#include <stdio.h>
/**
 * main - program that prints the lowercase alphabet in reverse.
 * You can only use the putchar function
 * Return: 0
 */
int main(void)
{
char i;
for (i = 'z' ; i >= 'a'  ; i--)
{
putchar(i);
}
putchar('\n');
return (0);


}
