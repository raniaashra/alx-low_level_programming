#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes string
 * @s: string
 * Return: character pointer
 */
char *rot13(char *s)
{
int i;
int j;
char d[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char k[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (s[i] == d[j])
{
s[i] = k[j];
break;
}
}
}
return (0);
}
