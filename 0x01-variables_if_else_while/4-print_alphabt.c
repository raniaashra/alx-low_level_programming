#include <stdio.h>
/**
 * main - print lower letter except q, e
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
return (0);
}
