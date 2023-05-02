#include <stdio.h>
/**
 * print_rev - print in reverse
 * @s: string
 * Return: Success
 */
void print_rev(char *s)
{
int i = 0;
int len;
while (*s != '\0')
{
i++;
s++;
}
s--;
for (len = i; len > 0; len--)
{
putchar(*s);
s--;
}
putchar('\n');
}
