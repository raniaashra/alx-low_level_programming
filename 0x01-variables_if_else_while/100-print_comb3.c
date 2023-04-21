#include <stdio.h>
/**
 * main - print combination og digit
 * Return: Always 0
 */
int main(void)
{
int d, k;
for (d = '0'; d < '9'; d++)
{
for (k = d + 1; k <= '9'; k++)
{
if (k != d)
{
putchar(d);
putchar(k);
if (d == '8' && k == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
