#include <stdio.h>

/**
 * main - prints the single digits in base 10
 * Return: Always 0 (success)
 */
int main(void)
{
int num;
for (num = 0; num < 10; num++)
puchar((num % 10) + '0');
putchar('\n');
return (0);
}