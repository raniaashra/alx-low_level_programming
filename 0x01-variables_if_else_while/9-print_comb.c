#include <stdio.h>
/**
 * main - print numbers with comma
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
for (x = 0; x < 10; x++)
{
putchar(x + '0');
if (x < 9)
{
putchar(',');
putchar(' ');
}
else
{
putchar('$');
}
}
putchar('\n');
return (0);
}
