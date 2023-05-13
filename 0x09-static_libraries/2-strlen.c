#include <stdio.h>
/**
 * _strlen - return length of string
 * @s: character pointer
 * Return: Success
 */
int _strlen(char *s)
{
int count = 0;
while (*s != '\0')
{
count++;
s++;
}
return (count);
}
