#include <stdio.h>
/**
 * rev_string - reverse string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
int i = 0;
int c;
while (*s != '\0')
{
i++;
s++;
}
s--;
for (c = i; c > 0; c--)
{
putchar(*s);
s--;
}putchar('\n');
}
