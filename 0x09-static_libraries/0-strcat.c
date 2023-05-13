#include "main.h"
#include <stdio.h>
/**
 *  *_strcat - append src string
 *@dest: char type string
 *@src: char type string
 *Return: pointer
*/
char *_strcat(char *dest, char *src)
{
int i = 0;
int j;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
