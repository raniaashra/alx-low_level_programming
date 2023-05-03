#include <stdio.h>
/**
 * puts2 - print every character
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
int i = 0;
int len = 0;
char *k = str;
int l;
while (*k != '\0')
{
i++;
k++;
}
len = i - 1;
for (l = 0; l <= len; l++)
{
if (l % 2 == 0)
{
putchar(str[l]);
}
}
putchar('\n');
}
