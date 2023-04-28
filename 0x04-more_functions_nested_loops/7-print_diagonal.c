#include <stdio.h>
/**
 * print_diagonal - print diagonal
 * @n: value
 * Return: no
 */
void print_diagonal(int n)
{
int x;
int y;
if (n <= 0)
{
putchar('\n');
}
else
{
for (y = 0; y < n; y++)
{
for (x = 0; x < y; x++)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
}
}
