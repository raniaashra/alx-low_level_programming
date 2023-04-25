#include "main.h"
/**
 * print_sign - print the sign of number
 * @c: check the sign
 * Return: 1 if n is greater or 0 if is zero or -1 if other
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
