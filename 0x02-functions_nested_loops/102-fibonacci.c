#include <stdio.h>
/**
 * main - prints first 52 fibonacci
 * Return: ...
 */
int main(void)
{
int i = 0;
long j = 1, k = 2;
while (i < 50)
{
if (i == 0)
printf("%1d", j);
else if (i == 1)
printf(", %1d", k);
else
{
k += j;
j = k - j;
printf(", %1d", k);
}
++i;
}
printf("\n");
return (0);
}
