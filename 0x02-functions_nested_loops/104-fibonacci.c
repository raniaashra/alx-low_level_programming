#include <stdio.h>
/**
 * main - print first 100 number
 * less
 * Return: ...
 */
int main(void)
{
int i ;
long j = 1, k = 2;
for (i = 0; i < 100; i++){
{
if (i == 0)
printf("%ld", j);
else if (i == 1)
printf(", %ld", k);
else
{
k += j;
j = k - j;
printf(", %ld", j);
}
++i;
}
printf("\n");
return (0);
}
