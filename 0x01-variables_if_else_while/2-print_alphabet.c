#include <stdio.h>

/**
 * main - print the alphabet in lower case
 * Return: Always 0 (sucess)
 */
int main(void)
{
char lc;
for (lc = 'a'; lc <= 'z'; lc++)
{
printchar(lc);
}
putchar('\n');
return (0);
}
