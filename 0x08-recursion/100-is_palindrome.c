#include "main.h"
/**
 * _strlen_recursion - size
 * @s: pointer to string params
 * Return: recursiion
 */
int _strlen_recursion(char *s)
{
if (!*s)
{
return (0);
}
return (1 + _strlen_recursion(++s));
}
/**
 * p1 - palindrome
 * @s: pointer to string
 * @l: position
 * Return: boolena
 */
int palindrome(char *s, int l)
{
if (l < 1)
{
return (1);
}
if (*s == *(s + l))
{
return (p1(s + 1, l - 2));
}
return (0);
}
