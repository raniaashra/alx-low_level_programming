#include <stdio.h>
#include "main.h"
/**
 * _puts - print string followed by new line
 * @str: string pointer
 * Return: no
 */
void _puts(char *str)
{
for (; *str != '\0'; str++)
{
putchar(*str);
}
putchar('\n');
}
