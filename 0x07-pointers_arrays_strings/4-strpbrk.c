#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - entry pointer
 * @s: input
 * @accept: input
 * Return: always 0
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return (NULL);
}
