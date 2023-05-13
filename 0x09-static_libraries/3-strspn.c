#include "main.h"
#include <stdio.h>
/**
 * _strspn - entry pointer
 * @s: input
 * @accept: input
 * Return: always 0
 */
unsigned int _strspn(char *s, char *accept)
{
int i, n, check;
check = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] != 32)
{
for (n = 0; accept[n] != '\0'; n++)
{
if (s[i] == accept[n])
check++;
}
}
else
return (check);
}
return (check);
}
