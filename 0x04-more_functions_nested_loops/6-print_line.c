#include <stdio.h>
/**
 * print_line - draw straight line
 * @n: value
 * Return: no
 */
void print_line(int n)
{
int x;
if (n <= 0)
{
putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
putchar('_');
}
putchar('\n');
}
}
