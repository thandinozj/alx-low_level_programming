#include <stdio.h>

/**
 * main - prints all combinations of single digits
 * Return: Always 0 (success)
 */
int main(void)
{
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
