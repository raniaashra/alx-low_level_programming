#include <stdio.h>
/**
 * main - print lower then upper letter
 * Return : Always (Success)
 */
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
return (0);
}
