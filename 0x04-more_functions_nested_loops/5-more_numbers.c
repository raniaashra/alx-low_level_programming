#include <stdio.h>
/**
 * more_numbers - from 0 to 14
 * Return: no
 */
void more_numbers(void)
{
int c;
int i;
for (i = 0; i < 10; i++)
{
for (c = 0; c <= 14; c++)
{
if (c > 9)
{
putchar((c / 10) + '0');
}
putchar((c % 10) + '0');
}
putchar('\n');
}
}
