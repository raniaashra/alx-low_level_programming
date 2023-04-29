#include <stdio.h>
#include "main.h"
/**
 * print_number - print an integer
 * @n: number
 * Return: void
 */
void print_number(int n)
{
unsigned int k = n;
if (n < 0)
{
putchar('-');
k = -k;
}
if ((k / 10) > 0)
print_number(k / 10);
putchar(( k % 10) + '0');
}
