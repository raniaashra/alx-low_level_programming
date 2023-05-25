#include "main.h"
/**
 * print_number - print an integer
 * @n: number
 * Return: void
 */
void print_number(int n)
{
if (n / 10 != 0)
{
print_number(n / 10);
if (n > 0)
{
putchar(n % 10 + '0');
}
else
{
putchar(-n % 10 + '0');
}
}
else if ((n / 10 == 0) && (n % 10 != 0) && (n > 0))
{
putchar(n % 10 + '0');
}
else if ((n / 10 == 0) && (n % 10 != 0) && (n <= 0))
{
putchar('-');
putchar(-n % 10 + '0');
}
}
