#include <stdio.h>
/**
 * print_array - print array not pointer
 * @a: pointer
 * @n: number of element in array
 * Return: void
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if ( i != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
