#include "main.h"
#include <stdio.h>
/**
 * _strncat - concat two string
 * @dest: first string
 * @src: second string
 * @n: bytes
 * Return:  pointer
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
