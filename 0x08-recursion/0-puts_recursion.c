#include  "main.h"
/**
 * _puts_recursion - prints a string
 * @s: pointer block of memory to fill
 * Return: always 0 success
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
